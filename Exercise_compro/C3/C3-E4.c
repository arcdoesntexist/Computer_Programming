#include <stdio.h>
int main() {
	char name[20] ;
	char surname[20];
	printf("Enter full name : ");
	scanf("%s%s",name,surname);
	printf("%s %.2s %.2s %s","[",name,surname,"]");
	return 0;
}