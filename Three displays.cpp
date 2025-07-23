#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;cin>>n;
	ll s[n+5],c[n+5];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}for(int i=0;i<n;i++){
		cin>>c[i];
	}
	vector<vector<ll>>dp(n+1,vector<ll>(4,INT_MAX));
	ll ans = INT_MAX;
	for(int i=0;i<n;i++){
		dp[i][0]=c[i];
		for(int j=0;j<i;j++){
			if(s[j]<s[i]){
				dp[i][1]=min(dp[i][1],c[i]+dp[j][0]);
				dp[i][2]=min(dp[i][2],c[i]+dp[j][1]);
			}
		}
		ans = min(ans, dp[i][2]);
	}
	if(ans == INT_MAX){
		puts("-1");
		return 0;
	}
	cout<<ans<<endl;
}