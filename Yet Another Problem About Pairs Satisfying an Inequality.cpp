#include <bits/stdc++.h>
#define pb push_back
#define int long long
using namespace std;

int32_t main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		vector<int>v;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>=i)continue;
			sum+=lower_bound(v.begin(),v.end(),a[i])-v.begin();
			v.pb(i);
		}
		cout<<sum<<endl;
	}
}