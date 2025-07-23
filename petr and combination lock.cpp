#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<(1<<n);i++){//0 to 2^n -1
		int sum=0;//total angle
		for(int j=0;j<n;j++){
			if(i&(1<<j))sum+=arr[j];//the ith bit is 1 = clockwise rotation
			else sum-=arr[j];//anticlockwise rotation
		}
		if(sum%360==0){
			puts("YES");return 0;
		}
	}
	puts("NO");
}
