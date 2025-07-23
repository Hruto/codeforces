#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
	ull s, n; cin>>s>>n;
	ull sum = s;
	bool flag = true;
	vector<pair<ull,ull> > arr;
	for(int i=0;i<n;i++){
		int a, b;cin>>a>>b;
		arr.push_back( make_pair(a,b));
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(arr[i].first<sum){
			sum+=arr[i].second;
		}else{
			flag=false; break;
		}
	}
	if(flag)puts("YES");
	else puts("NO");
	return 0;
}
