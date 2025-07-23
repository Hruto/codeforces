#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			int e;cin>>e;
			v.push_back(e);
		}
		sort(v.rbegin(), v.rend());
		ll ans = 0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				if(v[i]%2==0){
					ans+=v[i];
				}
			}else{
				if(v[i]%2==1){
					ans-=v[i];
				}
			}
		}
		if(ans==0) puts("Tie");
		else if(ans>0) puts("Alice");
		else puts("Bob");
	}
}
