#include <bits/stdc++.h>
#define int long long
using namespace std;

bool comp(vector<int>v1,vector<int>v2){
	return v1[0]<v2[0];
}
signed main(){
	int n,d;cin>>n>>d;
	vector<vector<int>>arr;
	for(int i=0;i<n;i++){
		int h,b;cin>>h>>b;
		arr.push_back({h,b});
	}
	sort(arr.begin(),arr.end(), comp);
	int sum=0,i=0;
	while(i<arr.size()){
		int h,b;
		h = arr[i][0];
		b = arr[i][1];
		if(d/h>b){
			d-=h*b;
			sum+=b;
			i++;
		}else{
			sum+=d/h;
			break;
		}
	}
	cout<<sum<<endl;
}