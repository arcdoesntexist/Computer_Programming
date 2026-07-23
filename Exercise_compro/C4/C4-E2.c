#include <stdio.h>
int main(){
	
	int num1,num2,num3,min,mid,max;
	printf(" *** Find Min , Mid , Max ***\n");
	printf("Enter 3 integers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1<num2&&num1<num3&&num2<num3){
					min = num1;
					mid = num2;
					max = num3;
	}
	else if(num1<num2&&num1<num3&&num2>num3){
					min = num1;
					mid = num3;
					max = num2;
	}
	else if(num1>num2&&num1<num3&&num2<num3){
					min = num2;
					mid = num1;
					max = num3;
	}
	else if(num1>num2&&num1>num3&&num2<num3){
					min = num2;
					mid = num3;
					max = num1;
	}
	else if(num1<num2&&num1>num3&&num2>num3){
					min = num3;
					mid = num1;
					max = num2;
	}
	else if(num1>num2&&num1>num3&&num2>num3){
					min = num1;
					mid = num2;
					max = num3;
	}
	
	printf("min : %d\nmid : %d\nmax : %d\n",min,mid,max);
	return 0;
}