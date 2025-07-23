#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		int b,y; 
		cin>>b>>y;
	}
	int c[20][20];
	for(int i=0;i<=20;i++){
		c[i][0]=1;
		for(int j=1;j<=20;j++){
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
		c[i][i]=1;
	}
	
	printf("n : %d\n",n);
	if(n<3){
		printf("0\n");return 0;
	}
	else printf("%d\n",c[n][3]);
}