#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		char matriks[4][4];
		int a;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>matriks[i][j];
				if(matriks[i][j]=='?'){
					a=i;
				}
			}
		}
		int check[4];
		for(int i=0;i<3;i++){
			check[i]=matriks[a][i]-'A';
		}
		sort(check,check+3);
		//for(int i=0;i<3;i++)cout<<check[i]<<endl;
		//cout<<endl;
		if(check[1]==0&&check[2]==1)puts("C");
		else if(check[1]==0&&check[2]==2)puts("B");
		else if(check[1]==1&&check[2]==2)puts("A");
	}
}
