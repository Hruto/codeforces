#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,sum=0;
		cin>>x;
		for(int j=1;j<=x/2;j++){
			if(x%j==0)sum++;
		}
		if(sum == 2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
