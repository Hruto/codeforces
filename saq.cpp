#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
    	string a;cin>>a;
    	s.push_back(a);
	}
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
    	cout<<s[i]<<endl;
	}
}