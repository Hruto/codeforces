#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;cin>>s;
		int pos = s[1] - '0';
		char p = s[0] - 'a';
		cout<<p<<endl;
		if(pos == 8){
			for(int i = 1;i<8;i++){
				cout<<s[0]<<i<<endl;
			}
		}
	}
}
