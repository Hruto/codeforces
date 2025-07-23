#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%lld", &n);
	string a,b; cin>>a>>b;
	int cost = 0;
	for(int i=0;i<n;){
		if(a[i] != b[i]){
			if(i+1<n&&a[i+1]!=b[i+1]&&a[i]!=a[i+1]){
				cost++;
				i+=2;
			}
			else{
				cost++;
				i++;
			}
		}else i++;
	}
	printf("%d\n", cost);
	//for(int i=0;i<j;i++)cout<<dif[i]<<endl;
}
