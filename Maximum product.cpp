#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int minn = -1e9;

int main(){
	ll t, ans;scanf("%lld", &t);
	while(t--){
		ll n, ans;scanf("%lld", &n);
		ll arr[n+1];
		for(ll i = 0;i<n;i++)scanf("%lld", &arr[i]);
		sort(arr,arr+n);
		ll x,y,z;
		x = arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
		y = arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
		z = arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
		ans = max(x,max(y,z));
		printf("%lld\n", ans);
	}
}
