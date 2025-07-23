#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; scanf("%d", &n);
	ll ans = 0;
	for(int i = 2;i<n;i++){
		ans+= 1ll * i * (i+1);
	}
	printf("%lld\n", ans);
}
