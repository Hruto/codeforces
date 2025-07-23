#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c;cin>>a>>b>>c;
		string s2;
		if(b==0){
			if(a!=0)cout<<string(a+1,'0')<<endl;
			else cout<<string(c+1,'1')<<endl;
			continue;
		}
		for(int i=0;i<b+1;i++){
			if(i&1)s2+="0";
			else s2 +="1";
		}
		s2.insert(1,string(a,'0'));
		s2.insert(0,string(c,'1'));
		cout<<s2<<endl;
	}
}