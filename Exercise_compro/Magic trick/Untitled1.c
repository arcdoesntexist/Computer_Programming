#include <stdio.h>
int main(){
	int n,o,d,re=0;
	printf("Enter number: ");
	scanf("%d",&n);
	o = n;
	while(n>0){
		d = n%10;
		re = re*10+d;
		n /= 10;
	}
	if (o == re){
		printf("%d is palindrome.",o);
	}
	else {
		printf("%d is not palindrome.",o);
	}
	return 0;
}