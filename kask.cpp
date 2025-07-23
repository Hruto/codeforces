#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;scanf("%lld",&n);
    ll jarak=1e9;
    ll store1,store2;
    for(ll i=1;i<=floor(n/2);i++){
    	if(n%i==0){
    		ll x=abs((n/i)-i);
    		//cout<<x<<" "<<i<<" "<<n/i<<endl;
    		if(x<jarak){
    			store1=i;store2=n/i;
    			jarak = x;
			}
		}
	}
	printf("%lld %lld\n", store1,store2);
}