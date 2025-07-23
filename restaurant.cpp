#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;cin>>n;
	pair<int,int>a[n+5];
	for(int i=0;i<n;i++)cin>>a[i].second>>a[i].first;
	sort(a,a+n);
	int ans = 1,now=a[0].first;
	for(int i=1;i<n;i++){
		if(a[i].second>now){
			ans++;
			now=a[i].first;
		}
	}
	cout<<ans<<endl;
}