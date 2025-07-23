#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a,b,c;cin>>a>>b>>c;
		int check=3;
		bool ch=true;
		while(check>0){
			if(n==1){
				n=a;check--;
			}
			else if(n==2){
				n=b;check--;
			}
			else if(n==3){
				n=c;check--;
			}else{
				ch=false;break;
			}
		}
		if(ch)puts("YES");
		else puts("NO");
	}
}