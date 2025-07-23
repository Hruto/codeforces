#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	map<string,int> mp;	
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]++;
        if(mp[s]==1)
            puts("OK");
        else
            cout<<s<<mp[s]-1<<endl;
    }
    return 0;
}
