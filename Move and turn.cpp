#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;scanf("%d",&n);
	if(n%2==0){
		int a = n/2 + 1;
		int b = pow(a,2);
		printf("%d\n", b);
	}else{
		int a = (n-1)/2;
		printf("%d\n", 2*(a+1)*(a+2));
	}
}
