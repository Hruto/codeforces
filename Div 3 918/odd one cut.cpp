#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int arr[4];
		for(int i=0;i<3;i++)cin>>arr[i];
		sort(arr,arr+3);
		if(arr[2]!=arr[1]&&arr[2]!=arr[0])cout<<arr[2]<<endl;
		else if(arr[0]!=arr[2]&&arr[0]!=arr[1])cout<<arr[0]<<endl;
	}
}
