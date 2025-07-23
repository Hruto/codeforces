#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;cin>>n;
	int a[n+5],maxo=-1e5,mino=1e5,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=0)sum+=a[i];
		if(abs(a[i])%2==1){
			if(a[i]<0)maxo = max(maxo,a[i]);
			else mino = min(mino, a[i]);
		}
	}
	//cout<<maxo<<" "<<mino<<endl;
	if(sum%2==0){
		sum-=min(mino,-maxo);
	}
	cout<<sum<<endl;
}