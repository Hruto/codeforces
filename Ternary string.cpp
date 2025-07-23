#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int cnt[4] = {};
		int l = 0;
		int n = s.length();
		int ans = n+1;
		for(int r=0;r<n;r++){
			int dig = s[r] - '0';
			cnt[dig]++;
			while(cnt[s[l]-'0']>1){
				cnt[s[l]-'0']--, l++;
			}
			if(cnt[1] && cnt[2] && cnt[3]){
				ans = min(ans, r-l+1);
			}
		}
		if(ans == n+1)puts("0");
		else cout<<ans<<endl;
	}
}
