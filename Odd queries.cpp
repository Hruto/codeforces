#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n){
	int initial = 0;
	return accumulate(a,a+n,initial);
}
int main(){
	int t;
	while(cin>>t){
		int n,q;cin>>n>>q;
		int arr[n],brr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			brr[i]=arr[i];
		}
		int size = sizeof(arr)/sizeof(arr[0]);
		while(q--){
			int l,r,k;cin>>l>>r>>k;
			for(int i=l-1;i<r;i++){
				brr[i] = k;
			}
			int tot = sum(brr,size);
			//cout<<tot<<endl;
			//for(int i=0;i<n;i++)cout<<arr[i]<<endl;
			if(tot%2==0){
				puts("NO");
			}else puts("YES");
			for(int i=0;i<n;i++)brr[i]=arr[i];
		}
	}
	return 0;
}
