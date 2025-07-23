#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;scanf("%lld", &t);
	while(t--){
		ll n;scanf("%lld", &n);
		ll sum = 0;
		vector<ll> a(n+1);
		for(int i=1;i<=n;i++){
			scanf("%lld", &a[i]);
			sum+=a[i];
		}
		
		ll tot = 2*sum/n;
		map<ll,ll>cnt;
		ll ans = 0;
		if((sum - tot) * n != sum * (n-2)){
			puts("0");
			continue;
		}
		for(int i=1;i<=n;i++){
			ans+= cnt[tot - a[i]];
			cnt[a[i]]++;
		}
		printf("%lld\n", ans);
	}
}
