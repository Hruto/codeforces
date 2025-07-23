#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++)cin>>a[i];
		int dp[n+1];
		int ans1=0;
		for(int i=0;i<n-1;i++)
		{
			dp[i]=(a[i]<2*a[i+1]);
		}
		for(int i=0;i<k;i++){
			ans1+=dp[i];
		}
		int r=0;
		if(ans1==k)r++;
		for(int i=k;i<n-1;i++){
			ans1+=dp[i];
			ans1-=dp[i-k];
			if(ans1==k)r++;
		}
		cout<<r<<endl;
	}
}