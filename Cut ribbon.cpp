#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a,b,c;cin>>n>>a>>b>>c;
	int dp[n+5];
	dp[0] =0;
	for(int i=1;i<=n;i++){
		dp[i] =-1e9;
		if((i-a)>=0) dp[i] = max(dp[i],dp[i-a]+1);
		if((i-b)>=0) dp[i] = max(dp[i],dp[i-b]+1);
		if((i-c)>=0) dp[i] = max(dp[i],dp[i-c]+1);
	}
	cout<<dp[n]<<endl;
}
