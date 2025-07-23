#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	ll dp[n+1];
	dp[0] = 1;
	dp[1] = 0;
	for(int i=2;i<=n;i++){
		dp[i] = 2*dp[i-2];
	}
	cout<<dp[n]<<endl;
	return 0;
}
