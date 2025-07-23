#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(){
	vector<int> prime;
	
	int arr[1000000+1];
	for(int i=0;i<=1000000;i++){
		if(i>=2)arr[i]=1;
		else arr[i]=0;
	}
	for(int i=0;i<=1000000;i++){
		if(arr[i] == 1){
			prime.push_back(i);
			for(int j = i+i; j <= 1000000;j+=i){
				arr[j]=0;
			}
		}
	}
	
	return prime;
}
int main(){
	int n;
	cin>>n;
	
	vector<int> prima = sieve();
	
	int check[n];
	for(int i=0;i<n;i++){
		cin>>check[i];
	}
	for(int i=0;i<n;i++){
		cout<< prima[check[i] - 1]<<endl;
	}
}