#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int a = s.find("AB");
	int b = s.find("BA", a+2);
	int c = s.find("BA");
	int d = s.find("AB", c+2);
	if((a!=-1 && b!=-1)||(c!=-1 && d !=-1)){
		puts("YES");
	}else puts("NO");
}

/*int check = 0;
	char c;
	for(int i=0;i<s.size()-1;i++){
		if(check == 2) break;
		if((s[i] == 'A' && s[i+1] == 'B')||(s[i] == 'B' && s[i+1] == 'A')){
			if(c == s[i])continue;
			if((s[i]==s[i+2]) && (s.size()>3)){
				check++;s.erase(i,i+2);
			}
			c = s[i];
			check++;
			s.erase(i, i+1);
		}
		cout<<s[i]<<endl;
	}
	if(check == 2)puts("YES");
	else puts("NO");
}

//SKDSKDJABSDBADKFJDK
*/
