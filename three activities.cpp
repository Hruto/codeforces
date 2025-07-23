#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		ll n;scanf("%lld",&n);
		vector< pair<ll,ll> >p1;
		vector< pair<ll,ll> >p2;
		vector< pair<ll,ll> >p3;
		for(ll i=0;i<n;i++){
			ll a;cin>>a;
			p1.push_back(make_pair(a,i));
		}
		for(ll i=0;i<n;i++){
			ll a;cin>>a;
			p2.push_back(make_pair(a,i));
		}
		for(ll i=0;i<n;i++){
			ll a;cin>>a;
			p3.push_back(make_pair(a,i));
		}
		sort(p1.begin(),p1.end());
		sort(p2.begin(),p2.end());
		sort(p3.begin(),p3.end());
		ll sum=0;
		for(ll i=n-1;i>n-4;i--){
			for(ll j=n-1;j>n-4;j--){
				for(ll k=n-1;k>n-4;k--){
					if(p1[i].second!=p2[j].second&&p1[i].second!=p3[k].second&&p2[j].second!=p3[k].second){
						sum = max(p1[i].first+p2[j].first+p3[k].first,sum);
					}
				}
			}
		}
		cout<<sum<<endl;
	}
}
