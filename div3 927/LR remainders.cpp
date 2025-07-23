#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<int>a;
		int tot=1;
		for(int i=0;i<n;i++){
			int c;cin>>c;
			tot*=c;
			a.push_back(c);
		}
		string s;cin>>s;
		int l=0,r=n-1,k=0;
		int p =1;
		while(l<r){
			if(s[k]=='L')l++;
			else r--;
			k++;
		}
		vector<int>ans;
		ans.push_back(a[l]%m);
		p=a[l];
		for(k=n-2;k>=0;k--){
			if(s[k]=='L'){
				l--;p=(p*a[l])%m;
			}else{
				r++;p=(p*a[r])%m;
			}
			ans.push_back(p);
		}
		reverse(ans.begin(),ans.end());
		for(auto x : ans)cout<<x<<" ";
		cout<<endl;
	}
}