#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		int start=100,end=0;
		for(int i=0;i<n;i++){
			if(s[i]=='B'){
				start = min(start,i);
				end = max(end,i);
			}
		}
		cout<<end-start+1<<endl;
	}
}