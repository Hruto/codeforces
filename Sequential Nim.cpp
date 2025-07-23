#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i];
		int k=0;
		while(k<n && arr[k] == 1){
			k++;
		}
		cout<<((n==k) ^ (k%2) ? "Second" : "First")<<endl;
	}
}
