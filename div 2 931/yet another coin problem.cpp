#include <bits/stdc++.h>
#define ll long long
using namespace std;

int coins[6] = {1,3,6,10,15};

ll mini(ll n){
	ll dp[n+1];
	for(int i=1;i<=n;i++){
		dp[i]=INT_MAX;
		ll ans = INT_MAX;
		for(ll c : coins){
			if(i-c>=0)ans=dp[i-c];
			if(ans!=INT_MAX)dp[i]=min(dp[i],ans+1);
		}
	}
	return dp[n];
}
int main()
{
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<mini(n)<<endl;
	}
}