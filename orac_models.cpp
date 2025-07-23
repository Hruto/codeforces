#include <bits/stdc++.h>
using namespace std;

int a[100005];
int dp[100005];
int n;
int func(int x){
	if(x>n)return 0;
	if(dp[x]!=-1)return dp[x];
	int count=0;
	for(int i=x;i<=n;i+=x){
		if(a[i]>a[x])count = max(count,1+func(i));
	}
	return dp[x]=count;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp[i]=-1;
		}
		int maxi=1;
		for(int i=1;i<=n;i++){
			maxi=max(maxi,1+func(i));
		}
		cout<<maxi<<endl;
	}
}