#include <bits/stdc++.h>
#define INF 2147483647
#define ll long long
using namespace std;

struct bit{
	private:
		vector<ll>arr;
		int n;
	public:
		bit(void){
			n=0;
		}
		void init(int i){
			n=i;arr.assign(n+1,0);
		}
		void update(int pos,ll val){
			for(;pos<=n;pos+=pos&(-pos))arr[pos]+=val;
		}
		ll query(int pos){
			ll sum=0;
			for(;pos>0;pos-=pos&(-pos)){
				sum+=arr[pos];
			}
			return sum;
		}
};

int main(){
	int n,k;cin>>n>>k;
	bit dp[12];
	for(int i=0;i<12;i++)dp[i].init(n);
	for(int i=0;i<n;i++){
		int a;cin>>a;
		dp[0].update(a,1);
		for(int j=1;j<=k;j++){
			dp[j].update(a,dp[j-1].query(a-1));
		}
	}
	cout<<dp[k].query(n)<<endl;
}