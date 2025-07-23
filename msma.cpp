#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;scanf("%d%d%d%d",&a,&b,&c,&d);
	int e = a*d + b*c;
	int f= b*d;
	int pembagi = __gcd(e,f);

	printf("%d %d\n",e/pembagi,f/pembagi);
}