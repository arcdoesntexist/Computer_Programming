#include <stdio.h>
int main() {
	float fahrenheit;
	printf(" *** Convert Fahrenheit to Celcius ***\n");
	printf("Enter temperature in degree Fahrenheit : ");
	scanf("%f",&fahrenheit);
	printf("%.2f %s %.2f %s",fahrenheit,"degree Fahrenheit equals",(fahrenheit-32)*5/9,"degree celcius.");
	return 0;
}