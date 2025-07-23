#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int m;cin>>m;
	int brr[m];
	for(int i=0;i<m;i++)cin>>brr[i];
	sort(arr,arr+n);
	sort(brr,brr+m);
	int sum =0;
	for(int i=0,j=0;i<n,j<m;){
		if(abs(arr[i]-brr[j])<=1){
			sum++;i++;j++;
		}else if((abs(arr[i]-brr[j])>1)&&arr[i]<brr[j]){
			i++;
		}else if((abs(arr[i]-brr[j])>1)&&arr[i]>brr[j]){
			j++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
