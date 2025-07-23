#include <bits/stdc++.h>
using namespace std;

string biner(int n,int x){
	if(n==0)return "1";
	return biner(n/x,x);
	if(n%x==0) return "0";
	else return (string)n%x;
}
int main(){
	int n,x;scanf("%d%d",&n,&x);
	printf("%s",biner(n,x));
}