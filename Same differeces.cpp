#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	while(n-- > 0){
		int x;cin>>x;
		map<int, int> a;
		long long res = 0;
		for(int i=0;i<x;i++){
			int z;cin>>z;
			z -= i;
			res += a[z];
			a[z]++;
		}
		cout<<res<<endl;
	}
	return 0;
}
