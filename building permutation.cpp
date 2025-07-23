#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;scanf("%d",&n);
	int x[n+1];
	long long res = 0;
	for(int i=1;i<=n;i++) scanf("%d", &x[i]);
	sort(x+1,x+n+1);
	for(int i=1;i<=n;i++){
		res+=abs(i-x[i]);
	}
	printf("%lld\n", res);
}
