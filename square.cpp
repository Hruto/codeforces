#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		vector<pair<int,int>>a;
		for(int i=0;i<4;i++){
			int x,b;cin>>x>>b;
			a.push_back(make_pair(x,b));
		}
		sort(a.begin(),a.end());
		int c = abs(a[0].second-a[1].second);
		int d = abs(a[1].first-a[2].first);
		cout<<c*d<<endl;
	}
}
