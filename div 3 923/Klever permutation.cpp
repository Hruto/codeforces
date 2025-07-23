#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int arr[n+5],ans=1,r=n;
		for(int i=1;i<=k;i++)
		{
			for(int j=i;j<=n;j+=k){
				if(j%2==1){
					arr[j]=ans;
					ans++;
				}else
				{
					arr[j]=r;
					r--;
				}
			}
		}
		for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
		cout<<endl;
	}
}