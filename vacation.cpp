#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++)cin>>a[i];
	int dp[105][5];
	memset(dp,0,sizeof(dp));
	if(a[0]==1 || a[0]==3)dp[0][1]++;
	if(a[0]==2 || a[0]==3)dp[0][2]++;
	for(int i=1;i<=n;i++){
		dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		dp[i][1]=max(dp[i-1][0],dp[i-1][2]);
		if(a[i]==1||a[i]==3)dp[i][1]++;
		dp[i][2]=max(dp[i-1][0],dp[i-1][1]);
		if(a[i]==2||a[i]==3)dp[i][2]++;
	}
	cout<<n-max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<endl;
}
