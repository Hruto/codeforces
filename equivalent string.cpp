#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s(string n){
	if(n.size()%2) return n;
	string s1 = s(n.substr(0, n.size()/2));
	string s2 = s(n.substr(n.size()/2, n.size()));
	if(s1<s2) return s1+s2;
	else return s2+s1;
}
int main(){
	string a,b; cin>>a>>b;
	if(s(a) == s(b)) puts("YES");
	else puts("NO");
}
