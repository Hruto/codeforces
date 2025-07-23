#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,k;scanf("%d%d",&n,&k);
		vector<int>arr(n);
		int sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr.begin(),arr.end());
		int score=0;
		for(int i=0;i<n-2*k;i++){
			sum+=arr[i];
		}
		for(int i=0;i<k;i++){
			score+=(arr[n-2*k+i]/arr[n-k+i]);
		}
		printf("%d\n", sum+score);
	}
}
