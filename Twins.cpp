#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i]; sum+=arr[i];
	}
	sort(arr,arr+n);
	int sum2 = 0,cur=0;
	for(int i=n-1;i>=0;i--){
		if(sum2<=sum){
			sum2+=arr[i];
			sum-=arr[i];
			cur++;
		}else break;
	}
	cout<<cur<<endl;
	return 0;
}
