#include <stdio.h>
#include <math.h>

int main(){
    int n;scanf("%d", &n);
    int x=0;
    for(int i=1;i<=n;i++){
    	int j=0;
    	while(j<i){
    		if(x>9)x=0;
    		printf("%d",x);
    		x++; j++;
		}
		printf("\n");
	}
}