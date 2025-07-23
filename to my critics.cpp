#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;cin>>a>>b>>c;
		bool flag = false;
		if(a+b>=10||a+c>=10||b+c>=10) flag=true;
		
		if(flag)puts("YES");
		else puts("NO");
	}
	return 0;	
}
