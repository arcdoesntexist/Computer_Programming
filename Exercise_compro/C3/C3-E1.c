#include <stdio.h>
int main() {
	char str1[] = "Computer Programming";
	char str2[] = "Programming";
	char str3[] = "Program";
	printf("%-40s%40s%1890s",str3,str2,str1);
	return 0;
}