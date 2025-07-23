#include <bits/stdc++.h>
using namespace std;

long long a[228228],k,o,i,j,n,m;
 
int main(){
	cin>>n;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	k=1;
	for(i=1;i<n;i++)if(a[i]>=a[i-1])k++;else o=max(o,k),k=1;
	o=max(o,k);
	cout<<o;
}
