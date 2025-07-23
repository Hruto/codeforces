#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n+1],sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];sum+=arr[i];
		}
		if(n==1){
			puts("YES");continue;
		}
		if(sum%n!=0){
			puts("NO");continue;
		}else{
			int avg = sum/n;
			int b=0;bool check=true;
			for(int i=0;i<n;i++){
				if(arr[i]-avg<0&&b==0){
					check=false;break;
				}else if(arr[i]+b<avg){
					check=false;break;
				}else if(arr[i]-avg<0){
					b-=abs(arr[i]-avg);
				}else b+=(arr[i]-avg);
			}
			if(check)puts("YES");
			else puts("NO");
		}
	}
}