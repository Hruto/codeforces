#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool have(ll arr[], ll n){
	ll sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum<=0){
			return 0;
		}
	}
	sum = 0;
	for(int i = n-1;i>=0;i--){
		sum += arr[i];
		if(sum<=0){
			return 0;
		}
	}
	return 1;
}

int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		ll arr[n+1];
		for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
		if(have(arr,n)) puts("YES");
		else puts("NO");
	}
}
