#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m; scanf("%d%d",&n,&m);
	vector<int> arr(n);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	sort(arr.begin(),arr.end());
	int x[200001];
	memset(x, 0, sizeof(x));
	x[0] = arr[0]; printf("%d ",x[0]);
	for(int i=1;i<n;i++){
		arr[i]+=arr[i-1];
		if((i-m)<0) x[i-m] = 0;
		x[i] = arr[i]+x[i-m];
		printf("%d ", x[i]);
	}
}
