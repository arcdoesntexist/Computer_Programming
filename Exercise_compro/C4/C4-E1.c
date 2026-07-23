#include <stdio.h>
int main(){
	
	int number;
	printf(" *** five times table ***\n");
	printf("Enter an integer : ");
	scanf("%d",&number);
	
	if (number % 5 == 0)
		printf("%d is divisible by 5.",number);
	else
		printf("%d is not divisible by 5.",number);
	
	return 0;
}