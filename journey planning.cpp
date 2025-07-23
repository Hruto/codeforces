#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	int n;cin>>n;
	map<int,int>dp;
	int maxi=0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		int diff=x-i;
		if(dp.find(diff)==dp.end())dp[diff]=x;
		else dp[diff]+=x;
		maxi = max(maxi,dp[diff]);
	}
	cout<<maxi<<endl;
}