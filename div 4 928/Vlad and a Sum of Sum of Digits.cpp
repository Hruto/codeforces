#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll sum=0;
		ll j=1;
		for(ll i=1;i<=n;i++){
			if(j>9)j=1;
			sum+=j;
			j++;
			//cout<<j<<" ";
		}
		cout<<sum<<endl;
	}
}