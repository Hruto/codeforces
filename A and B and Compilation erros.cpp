#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		sum+=x;
	}
	int sum2=0;
	for(int i=0;i<n-1;i++){
		int x;cin>>x;
		sum2+=x;
	}
	int sum3=0;
	for(int i=0;i<n-2;i++){
		int x;cin>>x;
		sum3+=x;
	}
	cout<<sum-sum2<<"\n"<<sum2-sum3<<endl;
	return 0;
}
