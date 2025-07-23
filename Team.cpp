#include <bits/stdc++.h>
using namespace std;

bool check(int arr[]){
	int ans = 0;
	sort(arr,arr+3,greater<int>());
	for(int i=0;i<3;i++){
		//cout<<arr[i]<<" ";
		if(arr[i]==1) ans++;
	}
	//cout<<ans<<endl;
	if(ans>=2){
		return true;
	}
	return false;
}
int main(){
	int t; cin>>t;
	int sum = 0;
	while(t--){
		int arr[3+1];
		for(int i=0;i<3;i++) cin>>arr[i];
		if(check(arr))sum++;
	}
	cout<<sum<<endl;
}
