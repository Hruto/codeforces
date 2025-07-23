#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	int n;cin>>n;
	long long a[100000],ans,i,j;
    for(i=1;i<=n;i++)cin>>a[i];
    sort(a,a+n+1);
	if(a[0]*2==a[n-1])
    {
        cout<<0<<endl;
        return 0;
    }
    ans=n;
    j=0,i=0;
    while(i-1!=n)
    {
        if(a[j]*2>=a[i])i++;
        else j++;
        ans=min(ans,n-i+j);
    }
	cout<<ans<<endl;
}