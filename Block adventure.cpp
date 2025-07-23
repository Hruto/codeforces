#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n,m,k,r; scanf("%d%d%d", &n, &m, &k);
		int column[n+1];
		for(int i=0;i<n;i++) scanf("%d", &column[i]);
		bool check = true;
		for(int i=0;i<n-1;i++){
			r = max(0, column[i+1] - k);
			m+= column[i] - r;
			if(m<0){
				check = false;
				break;
			}
		}
		if(check)puts("YES");
		else puts("NO");
	}
}
