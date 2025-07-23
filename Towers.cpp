#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr.begin(),arr.end());
	int cur = arr[0];
	int h=1;
	for(int i=1;i<n;i++){
		//cout<<arr[i]<<endl;
		if(cur==arr[i]){
			h++;
			remove(arr.begin(),arr.end(),arr[i]);
		}else{
			cur=arr[i];
		}
	}
	int sum = sizeof(arr)/sizeof(arr[0]);
	cout<<h<<" "<<sum<<endl;
	return 0;
}
