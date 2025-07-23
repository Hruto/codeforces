#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	ll arr[n+5];
	for(ll i=1;i<=n;i++)cin>>arr[i];
	ll dp[n+5];
	arr[0] = 0;
	dp[0] = 0;
	dp[1] = arr[1];
	for(ll i=2;i<=n;i++){
		dp[i] = max(dp[i-1], dp[i-2]+arr[i]);
	}
	cout<<dp[n]<<endl;
	return 0;
}
