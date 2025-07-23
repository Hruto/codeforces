#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	string s; getline(cin,s);
	ll ans = 0;
	for(int i=0;i<int(int((s).size()));i++){
		int d = ll(s[i]-'0');
		if(d%4==0)ans++;
		if(i){
			int pd = int(s[i-1]-'0');
			if((pd*10+d)%4==0)ans+=i;
		}
	}
	printf("%lld\n",ans);
}
