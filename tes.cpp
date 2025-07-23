#include <bits/stdc++.h>
using namespace std;
int main(){
	string c;cin>>c;
	for(int j=0;j<100;j++){
		string s = c;
		int k;cin>>k;
		for(int i=0;i<s.length();i++){
			if(s[i]+k>122){
				int res=122-s[i];
				s[i]='a';
				s[i]+=(k-res-1);
			}
			else s[i]+=k;
		}
		cout<<s<<endl;
	}
	
}