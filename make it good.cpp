#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d", &n);
		vector<int>arr(n);
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		int pos = n-1;
		while(pos>0 && arr[pos-1] >= arr[pos]) pos--;
		while(pos>0 && arr[pos-1]<=arr[pos]) pos--;
		printf("%d\n", pos);
	}
}
