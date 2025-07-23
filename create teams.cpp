#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		vector<int>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a.begin(),a.end());
		vector<int>ans(n+1);
		for(int i=n-1;i>=0;i--){
			int sum;
			if(m%a[i]==0)sum=(m/a[i]);
			else sum=(m/a[i])+1;
			if(i+sum>n)continue;
			ans[i]=1+ans[i+sum];
		}
		cout<<*max_element(ans.begin(),ans.end())<<endl;
	}
}