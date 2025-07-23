#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int a,b,n;cin>>a>>b>>n;
		int sum = 0,x=0;
		while(sum <= n){
            if(a > b){
                b += a;
                sum = b;
                x++;
            }
            else{
                a += b;
                sum = a;
                x++;
            }
            if(sum > n){
                break;
            }
        }cout<<x<<endl;
	}
}