#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e9;

int main(){
	ll n;scanf("%lld", &n);
	ll f[n+1][8];
	
	for(ll i = 0;i<=n;i++){
		for(ll j = 0;j<8;j++){
			f[i][j] = inf;
		}
	}
	f[0][0] = 0;
	for(ll i=0;i<n;i++){
		ll cost; string s;
		cin>>cost>>s;
		int stringmask = 0;
		for(int pos = 0;pos<3;pos++){
			char c = 'C' - pos;
			bool have = 0;
			for(char d: s){
				if(c == d) have = 1;
			}
			if(have){
				stringmask += (1<<pos); // 2 ^ pos;
			}
		}
		for(ll mask = 0;mask<8;mask++){
			f[i+1][mask] = min(f[i+1][mask], f[i][mask]);
			f[i+1][mask | stringmask] = min(f[i+1][mask | stringmask], f[i][mask] + cost);
		}
	}
	ll ans = f[n][7];
	if(ans == inf) ans = -1;
	printf("%lld\n", ans);
}
