#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		string bob;scanf("%s", &bob);
		vector<int> count(26);
		for(char x : bob)
			count[x - 'A']++;
		
		int wins = min(a, count['S' - 'A']) + min(b, count['R' - 'A']) + min(c, count['P' - 'A']);
		if(2*wins<n){
			puts("NO");continue;
		}
		
		puts("YES");
		string t;
		for(int i=0;i!=n;i++){
			if(bob[i] == 'S' && a){
				t += 'R';
				a--;
			}
			else if(bob[i] == 'R' && b){
				t+='P';
				b--;
			}else if(bob[i] == 'P' && c){
				t+='S';
				c--;
			}else{
				t += '_';
			}
		}
		for(int i=0;i!=n;i++){
			if(t[i] != '_'){
				continue;
			}if(a){
				t[i] = 'R';
				a--;
			}else if(b){
				t[i] = 'P'; b--;
			}else{
				t[i] = 'S'; c--;
			}
		}
		cout<<t<<endl;
	}
}
