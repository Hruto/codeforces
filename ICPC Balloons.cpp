#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	while(n--){
		vector<char>arr;
		int x;cin>>x;
		char s;
		for(int i=0;i<x;i++){
			cin>>s;
			arr.push_back(s);
		}sort(arr.begin(),arr.end());
		int sum = 2;
		for(int i=1;i<x;i++){
			if(arr[i]==arr[i-1]){
				sum++;
			}else sum+=2;
		}
		cout<<sum<<endl;
	}
}
