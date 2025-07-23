#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, b; scanf("%d%d", &n, &b);
	int arr[n+1];
	int even = 0, odd = 0;
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	int sum = 0;
	vector<int>price;
	for(int i=0;i<n-1;i++){
		if(arr[i]%2==0)even++;
		else odd++;
		if(even==odd){
			price.push_back(abs(arr[i]-arr[i+1]));
		}
	}
	sort(price.begin(),price.end());
	for(int i=0;i<price.size();i++){
		if(b-price[i]>=0){
			b-=price[i];
			sum++;
		}else break;
	}
	printf("%d\n", sum);
}
