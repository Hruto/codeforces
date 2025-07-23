#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool flag(ll n){
	ll root = sqrt(n);
	return root *root ==n;
}
	    
int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll sum=0;
		for(ll i=0;i<n;i++){
			ll a;cin>>a;
			sum+=a;
		}
	    
	    if(flag(sum))puts("YES");
	    else puts("NO");
	}
}
