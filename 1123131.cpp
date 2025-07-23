#include <bits/stdc++.h>
using namespace std;
int arr[501];
int n;

int solve(int n){
	if(n==0)return 0;
	int best = 1000000;
	for(int i=0;i<n;i++){
		if(arr[i]<=n){
			best = min(best,solve(n-arr[i])+1);
		}
	}
	return best;
}
int main(){
	cin>>n;
	cout<<solve(n)<<endl;
}