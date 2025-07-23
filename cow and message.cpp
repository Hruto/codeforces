#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll alp[26],alp2[26][26];
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		int k = s[i]-'a';
		for(int j=0;j<26;j++)alp2[j][k]+=alp[j];
		alp[k]++;
	}
	ll ans = 0;
	for(int i=0;i<26;i++)ans=max(ans,alp[i]);
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++)
			ans=max(ans,alp2[i][j]);
	}
	printf("%lld\n",ans);
}


