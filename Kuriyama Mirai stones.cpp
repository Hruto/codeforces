#include <bits/stdc++.h>
#define ll long long
const int maxn = 100010;
using namespace std;

int main(){
	ll n;cin>>n;
	ll stone[maxn], stone2[maxn];
	for(int i=1;i<=n;i++){
		cin>>stone[i];
		stone2[i] = stone[i];
	}
	sort(stone2+1,stone2+n+1);
	for(int i=1;i<=n;i++){
		stone[i]+=stone[i-1], stone2[i]+=stone2[i-1];
	}
	ll m;cin>>m;
	while(m--){
		ll type,l,r;
		cin>>type>>l>>r;
		if(type==2)cout<<stone2[r]-stone2[l-1]<<endl;
		else cout<<stone[r]-stone[l-1]<<endl;
	}
}
