#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x,y;cin>>n>>x>>y;
		int a[n+1];
		for(int i=0;i<n;i++)cin>>a[i];
		long long ans = 0;
		map<pair<int,int>,int>arr;
		for(int i=0;i<n;i++){
			int r=(x-(a[i]%x))%x;
			int r2=a[i]%y;
			pair<int,int> p =make_pair(r,r2);
			ans+=arr[p];
			arr[make_pair((a[i]%x),r2)]++;
		}
		
		cout<<ans<<endl;
	}
}