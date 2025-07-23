#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<ll>arr(n);
		set<ll>s;
		ll sum=0;
		bool check=false;
		s.insert(0);
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(i%2==0)arr[i]*=-1;
			sum+=arr[i];
			if(s.find(sum)!=s.end())check = true;
			s.insert(sum);
		}
		if(check)puts("YES");
		else puts("NO");
	}
}
