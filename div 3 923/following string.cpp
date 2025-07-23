#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n, cnt[30];
		memset(cnt, 0, sizeof(cnt));cin>>n;
		for(int i=1; i<=n; i++)
		{
			int p; cin>>p;
			for(int j=0; j<26; j++)
			{
				if(cnt[j]==p)
				{
					printf("%c", j+'a');
					cnt[j]++;
					break;
				}
			}
		}
		printf("\n");
	}
}