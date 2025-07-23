#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;scanf("%lld", &n);
	while(n--){
		ll x;scanf("%lld", &x);
		ll pos = 0;
		while(pos * (pos+1) < 2*x) pos++;
		if(pos*(pos+1)/2 == x+1) pos++;
		printf("%lld\n", pos);
	}
}
