#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector< pair<int,int> > arr;
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr.push_back(make_pair(a,b));
	}
	sort(arr.begin(),arr.end(), greater<int>());
	if(arr[0].first<arr[1].first){
		puts("Happy Alex");
	}
	else puts("Poor Alex");
	return 0;
}
