#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	while(n--){
		ll t;cin>>t;
		vector<ll> v(t);
		for(int i=0;i<t;i++) cin>>v[i];
		bool yes = false;
		set<ll> c;
		for(int i=t-1;i>=0;i--){
			if(c.count(v[i])){
				cout<<i+1<<endl;
				yes = true;
				break;
			}
			c.insert(v[i]);
		}
		if(!yes) puts("0\n");
	}
	return 0;
}
