#include <bits/stdc++.h>
#define oo 1000000000
#define ll long long
using namespace std;

int main(){
	ll n,t;cin>>n>>t;
	ll arr[t+5];
	for(int i=0;i<t;i++){
		cin>>arr[i];
	}
	sort(arr,arr+t);
	ll best = oo;
	for(int k=1;k<=t-n;k++){
		best = min(best, arr[k+n-1]-arr[k]);
	}
	cout<<best<<endl;
	return 0;
}
