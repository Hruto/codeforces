#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,sum=0;cin>>n;
		string s;
		cin>>s;
		int f=0;
		for(int i=0;i<n-2;i++){
			if(s[i]=='@')sum++;
			if(s[i+1]=='*'&&s[i+2]=='*'){
				f=1;break;
			}
		}if(f==0){
			if(s[n-1]=='@')sum++;
			if(s[n-2]=='@')sum++;
		}
		cout<<sum<<endl;
	}
}