#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int ans = 1;
		for(int i=0;i<n;i++){
			if(i==0)a[i]++;
			ans *= a[i];
		}
		cout<<ans<<endl;
	}
}