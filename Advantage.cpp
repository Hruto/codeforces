#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;cin>>n;
	while(n--){
		ll t;cin>>t;
		vector<ll> v;
		vector<ll> v1;
		for(ll i=0;i<t;i++){
			ll s;cin>>s;
			v.push_back(s);
			v1.push_back(s);
		}
		sort(v1.begin(), v1.end());
		for(ll i=0;i<t;i++){
			if(v[i]==v1[v1.size()-1]){
				cout<<v[i]-v1[v1.size()-2]<<" ";
			}else{
				cout<<v[i]-v1[v1.size()-1]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
