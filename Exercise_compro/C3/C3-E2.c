#include <stdio.h>
int main() {
	float number;
	printf(" *** Show a number in variety formats. ***\n");
	printf("Enter integer : ");
	scanf("%f",&number);
	printf("%s%7s %.f","Int","->",number);
	printf("\n%s%5s %.2f","Float","->",number);
	printf("\n%s%5s %.3f","Int/3","->",number/3);
	printf("\n%s%5s %.f","Int^2","->",number*number);
	return 0;
}