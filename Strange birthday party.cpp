#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n,m;cin>>n>>m;
		ll fr[n+1],pr[m+1];
		for(ll i=0;i<n;i++){
			cin>>fr[i]; fr[i]--;
		}
		for(ll i=0;i<m;i++)cin>>pr[i];
		sort(fr,fr+n,greater<ll>());
		//puts("urutan sort");
		//for(int i=0;i<n;i++)cout<<fr[i]<<endl;
		//cout<<endl;
		ll res(0);
		for(ll i=0;i<n;i++){
			ll idx = (i<fr[i]) ? i : fr[i];
			res+=pr[idx];
			//cout<<ans<<endl;
		}
		cout<<res<<endl;
	}
}
