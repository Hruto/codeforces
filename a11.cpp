#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;cin>>a>>b;
	bool flag=false;
	for(int i=0;i<b.length();i++){
		string temp=a;
		if(temp.erase(i,1)==b){
			flag =true;
			break;
		}
	}
	if(flag)puts("Tentu saja bisa!");
	else puts("Wah, tidak bisa :(");
}