#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool flag(ll n){
	return n>0;
}
int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n+1];
		ll ans = 0;
		for(ll i=0;i<n;i++)cin>>arr[i];
		for(ll i=0;i<n;i++){
			ll j=i;
			ll sum = arr[i];
			while(j<n&&flag(arr[i])==flag(arr[j]))sum=max(arr[j],sum),j++;
			i=j-1;
			ans+=sum;
		}
		cout<<ans<<endl;
	}
}
