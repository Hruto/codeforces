#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;cin>>n;
	ll dp[n+1];
	int arr[5]= {1,5,10,20,100};
	memset(dp, 1e5, sizeof(dp));
	for(ll i = 1;i<=n;i++){
		for(int j=0;j<=4;j++){
			if(arr[j]<=i){
				dp[i] = min(dp[i], dp[i-arr[j]]+1);
			}
		}
	}
	if(dp[n]== 1e5){
		cout<<"0"<<endl;
	}else cout<<dp[n]<<endl;
	return 0;
}
