#include <stdio.h>
int main(){
	int num1,num2,i,sum=0,k;
	printf(" *** Display Summation ***\n");
	printf("Enter 2 whole numbers : ");
	scanf("%d %d",&num1,&num2);
	printf("Summation = ");
	if (num2 < num1){
		k = num1 ;
		num1 = num2;
		num2 = k;
	}
	for(i=0;i<=num2;i++){
			sum += i;	
			printf("%d",i);
			if (i<num2){
				printf(" + ");
		}
	}
	printf(" = %d\n",sum);
	return 0;
}