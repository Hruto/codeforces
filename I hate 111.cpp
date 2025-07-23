#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		ll x;scanf("%lld",&x);
		if(x>=111*(x%11))puts("YES");
		else puts("NO");
	}
}
