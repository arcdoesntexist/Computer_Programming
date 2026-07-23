#include <stdio.h>
int main() {
	int lottery;
	printf("Enter lottery number : ");
	scanf("%d",&lottery);
	printf("%s%2s %d","Jackpot",":",lottery);
	printf("\n%s%7s %d","+1",":",lottery+1);
	printf("\n%s%7s %d","-1",":",lottery-1);
	printf("\n%s%2s %d","First 3",":",lottery/1000);
	printf("\n%s%3s %d","Last 3",":",lottery%1000);
	return 0;
}