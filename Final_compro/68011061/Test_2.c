#include <stdio.h>
	void n_check(char n,int *x){
		if(n == '1'){ 
			*x = 1;
		}
		else if(n == '2'){ 
			*x = 2;
		}
		else if(n == '3'){ 
			*x = 3;
		}
		else if(n == '4'){ 
			*x = 4;
		}
		else if(n == '5'){ 
			*x = 5;
		}
		else if(n == '6'){ 
			*x = 6;
		}
		else if(n == '7'){ 
			*x = 7;
		}
		else if(n == '8'){ 
			*x = 8;
		}
		else if(n == '9'){ 
			*x = 9;
		}
		
		else if(n == 'a'){ 
			*x = 10;
		}
		else if(n == 'b'){
			*x = 11;
		}
		else if(n == 'c'){
			*x = 12;
		}
		else if(n == 'd'){
			*x = 13;
		}
		else if(n == 'e'){
			*x = 14;
		}
		else if(n == 'f'){
			*x = 15;
		}
	}
	
int main(){
	char n;
	int i,j,x=0;
	printf("Input size of the triangle : ");
	scanf("%c",&n);
	n_check(n, &x);
	if (x>0 && x <= 15){
		for(i=0;i<x;i++){
				for(j=0;j<=i;j++){
					printf("*");
		}
		printf("\n");
	}
	}
	else{
		printf("It's cannot draw the triangle.");
	}
}
