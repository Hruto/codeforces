#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[5][100005];
int32_t main()
{
	int n;cin>>n;
	int a[n+5],b[n+5];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		dp[1][i]=max(dp[2][i-1]+a[i],dp[3][i-1]+a[i]);
		dp[2][i]=max(dp[1][i-1]+b[i],dp[3][i-1]+b[i]);
		dp[3][i]=max(dp[2][i-1],dp[1][i-1]);
	}
	cout<<max(dp[1][n],dp[2][n])<<endl;
}