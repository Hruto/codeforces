#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	int mode[100000] = {0,0};
	int large = 0;
	double sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mode[arr[i]]++;
		if(arr[i]>large)large = arr[i];
		sum+=arr[i];
	}
	sort (arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//Mean
	puts("Mean:");
	cout<<sum/n<<endl;
	//Median
	puts("Median:");
	if(n%2==0){
		double l=arr[n/2]+arr[(n/2)-1];
		cout<<l/2<<endl;
	}else cout<<arr[n/2]<<endl;
	//mode
	puts("Mode:");
	int banyak=0;
	int check;
	for(int i=0;i<=large;i++){
		if(banyak<mode[i]){
			banyak = mode[i]; check = i;
		}
	}
	cout<<check<<endl;
	//quartile
	
}