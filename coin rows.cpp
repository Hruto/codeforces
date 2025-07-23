#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int m;cin>>m;
		int p =0,s=0;
		int a[2][m+1];
		for(int i=0;i<2;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		p = accumulate(a[0],a[0]+m,0);
		int ans = 1e9;
		for(int i=0;i<m;i++){
			p-=a[0][i];
			ans = min(ans,max(s,p));
			s+=a[1][i];
		}
		cout<<ans<<endl;;
	}
}