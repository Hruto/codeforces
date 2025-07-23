#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x;cin>>n>>x;
	string s;
	int note=0;
	vector<int> s;
	while(n>0){
		int a=n%x;
		s.push_back(a);
		n/=x;
		note++;
	}
	for(int i=0;i<note;i++){
		cout<<s[i];
	}
}