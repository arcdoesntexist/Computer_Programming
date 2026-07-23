#include <stdio.h>
int main(){
	int num,i,j;
	printf("Input the number : ");
	scanf("%d",&num);
	for (i=0;i<num;i++){
		if(i==0){
			printf("\\\n");
		}
		if(i==1){
			printf("|\\\n");
		}
		for (i=2;i<num-1;i++){
		printf("|");
		for(j=1;j<i;j++){
			printf("*");
		}
		printf("\\\n");
		}
		if(i+1==num){
			printf("|");
		}
		for(j=0;j<num-2;j++){
			printf("_");
		}
		printf("\\");
	}
	return 0;
}