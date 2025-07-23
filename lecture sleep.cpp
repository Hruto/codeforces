#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,k; scanf("%d %d", &n, &k);
	int sum=0;
	vector<int>arr(n);
	for(int i=0;i<n;i++) scanf("%d", &arr[i]);
	vector<int>sleep(n);
	for(int i=0;i<n;i++) scanf("%d", &sleep[i]);
	vector<int>pr(n);
	for(int i=0;i<n;i++){
		if(i) pr[i]+=pr[i-1];
		if(sleep[i]==0) pr[i]+=arr[i];
		else sum+=arr[i];
	}
	int add = 0;
	for(int i=k-1;i<n;i++){
		if(i>=k){
			add = max(add, pr[i] - pr[i-k]);
		}else add = max(add, pr[i] - 0);
	}
	printf("%d\n", sum+add);
}
