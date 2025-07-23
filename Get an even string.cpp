#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		int m=0, n = (int)s.size();
		vector<bool> prev(26, false);
		for(auto &i : s){
			if(prev[i-'a']){
				m+=2;
				for(int j=0;j<26;j++) prev[j] = false;
			}
			else prev[i-'a'] = true;
		}
		printf("%d\n", n-m);
	}
}
