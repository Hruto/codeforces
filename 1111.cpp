#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long lot=1e18;
ll w[lot], v[lot], memo[1000000000][1000000000];
bool visited[1000000000][1000000000];

ll solve(ll i, ll c){
	if(i==0)return 0;
	if(visited[i][c])return memo[i][c];
	ll best = solve(i-1,c);
	if(c>=v[i]){
		best = max(best, solve(i-1,c-v[i])+w[i]);
	}
	memo[i][c]=best;
	visited[i][c]=true;
	return best;
}
int main(){
	ll n,d;cin>>n>>d;
	for(int i=0;i<n;i++)cin>>v[i]>>w[i];
	cout<<solve(n,d)<<endl;
}