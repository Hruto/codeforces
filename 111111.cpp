#include <bits/stdc++.h>
using namespace std;

bool comp(vector<double>v1,vector<double>v2){
	return v1[0]<v2[0];
}
int main(){
	int n,x;cin>>n>>x;
	double w[n],c[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
	}for(int i=0;i<n;i++)cin>>c[i];
	vector<vector<double>> arr;
	for(int i=0;i<n;i++){
		arr[i][0]=c[i]/w[i];
		arr[i][1]=i;
	}
	sort(arr.begin(),arr.end(),comp);
	int i=0;
	double sum=0;
	while(i<arr.size()){
		double h;int b;
		h = arr[i][0];
		int a = arr[i][1];
		b = w[a];
		if(x/h>b){
			x-=h*b;
			sum+=(h*b);
			i--;
		}else{
			sum+=(x/h)*b;
			break;
		}
	}
	cout<<sum<<endl;
}