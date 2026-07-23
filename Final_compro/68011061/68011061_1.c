#include <stdio.h>
int main(){
	int n,i,k;
	printf("Input number (2-6) : ");
	scanf("%d",&n);
	if (n>1 && n<=6){
		for (k=1;k<=12;k++){
			for (i=0;i<4;i++){
				printf(" %d x %2d = %3d     ",n+i,k,(n+i)*k);
			}
			printf("\n");
		}	
	}
	else{	
		printf("Out of range !!!");
	}
}