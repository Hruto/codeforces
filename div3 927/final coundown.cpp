#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;string s;
		cin>>n>>s;
		vector<int>a(n),ans(n);
		a[0]=s[0]-'0';
		for(int i=1;i<n;i++)a[i]=a[i-1]+(s[i]-'0');
		int c=0;
		for(int i=n-1;i>=0;i--){
			int x = a[i]+c;
			ans[i]=x%10;
			c=x/10;
		}
		if(c)cout<<c;
		bool check=0;
		for(int i=0;i<n;i++){
			if(!check && !c && !ans[i])continue;
			cout<<ans[i];
			check=1;
		}
		cout<<endl;
	}
}