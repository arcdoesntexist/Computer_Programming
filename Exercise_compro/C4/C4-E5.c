#include <stdio.h>
int main(){
	char A,B,C,D,Operator;
	float result;
	int Num1,Num2,p1,p2;
	printf("%s","A is +\n");
	printf("%s","B is -\n");
	printf("%s","C is *\n");
	printf("%s","D is /\n");

	printf("Enter number and operator : ");
	scanf("%d %c %d",&Num1,&Operator,&Num2);
	
	if (Num1<Num2){
		p1=Num1;
		p2=Num2;
	}
	else {
		p1=Num2;
		p2=Num1;
	}

	switch (Operator){
		case 'A' : result = (p1*1.00) + (p2*1.00);
				printf("%d+%d = %.3f\n",p1,p2,result);
				break;
		case 'B' : result = (p1*1.00) - (p2*1.00);
				printf("%d-%d = %.3f\n",p1,p2,result);
				break;
		case 'C' : result = (p1*1.00) * (p2*1.00);
				printf("%d*%d = %.3f\n",p1,p2,result);
				break;
		case 'D' : result = (p1*1.00) / (p2*1.00);
				printf("%d/%d = %.3f\n",p1,p2,result);
				break;
	}
	return 0;
}