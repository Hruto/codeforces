#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;scanf("%d",&q);
	while(q--){
		string s, t;
		cin>>s>>t;
		int length = t.size();
		int check = 0;
		int i=0,j=0;
		while(i<s.size()&&j<length){
			if(t[j]==s[i] && i!=s.size()-1){
				check++;
				i++;j++;
			}
			else if(t[j]== '.'){
				check=length;break;
			}
			else if(t[j]==s[i-2]&&t[j]!=s[i]){
				check++;i-=3;j++;
			}else if((i==s.size()-1 && t[j]==s[i]) && (t[j+1]==s[i-1])){
				i--;check++;j++;
			}
			else if(t[j]==s[i]&&i==s.size()-1 && j==length-1){
				check++;i++;j++;
			}
			else i++;
		}
		//cout<<check;
		if(check==length)puts("YES");
		else puts("NO");
	}
}
