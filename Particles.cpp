#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		ll n; scanf("%lld",&n);
		ll arr[n+1];
		bool check = false;
		for(ll i=0;i<n;i++){
			scanf("%lld",&arr[i]);
			if(arr[i]>=0) check=true;
		}
		if(n==1){
			printf("%lld\n",arr[0]);
			continue;
		}
		if(!check){
			ll ans = arr[0];
			for(ll i=1;i<n;i++){
				ans=max(ans,arr[i]);
			}
			printf("%lld\n", ans);
			continue;
		}
		ll sum1=0,sum2=0;
		for(ll i=0;i<n;i+=2){
			sum2+=max(arr[i],1ll*0);
		}
		for(ll i=1;i<n;i+=2) sum1+=max(arr[i],1ll*0);
		printf("%lld\n", max(sum1,sum2));
	}
}
