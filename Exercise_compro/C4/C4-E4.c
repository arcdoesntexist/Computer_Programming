#include <stdio.h>
int main(){
	char c1,c2,c3;
	int result;
	printf(" *** Character Sum Number ***\n");
	printf("Enter 3 Character (A,B,C) : ");
	scanf("%c %c %c",&c1,&c2,&c3);
	int A=10;
	int B=20;
	int C=30;
	int x,y,z;
	if((c1!='A'&&c1!='B'&&c1!='C')||(c2!='A'&&c2!='B'&&c2!='C')||(c3!='A'&&c3!='B'&&c3!='C')){
		printf("Input Incorrect.");
	} else {
			
		switch (c1) {
			case 'A' : {
				printf("A = 10 , ");
				x=10;
				break;
			} 
			case 'B' : {
				printf("B = 20 , ");
				x=20;
				break;
			} 
			case 'C' : {
				printf("C = 30 , ");
				x=30;
				break;
			} 
		}
		switch (c2) {
			case 'A' : {
				printf("A = 10 , ");
				y=10;
				break;
			} 
			case 'B' : {
				printf("B = 20 , ");
				y=20;
				break;
			} 
			case 'C' : {
				printf("C = 30 , ");
				y=30;
				break;
			} 
		}
		switch (c3) {
			case 'A' : {
				printf("A = 10\n");
				z=10;
				break;
			} 
			case 'B' : {
				printf("B = 20\n");
				z=20;
				break;
			} 
			case 'C' : {
				printf("C = 30\n");
				z=30;
				break;
			} 
		}
		printf("%c + %c + %c = %d + %d + %d = %d",c1,c2,c3,x,y,z,x+y+z);
	}
	
	
	return 0;
}