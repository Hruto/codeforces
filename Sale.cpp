#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;cin>>n>>m;
	int a[n+5];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<m;i++){
		if(a[i]>0)break;
		sum+=abs(a[i]);
	}
	cout<<sum<<endl;
}