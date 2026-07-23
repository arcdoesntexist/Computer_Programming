#include <stdio.h>
int main(){
	
	int num;
	printf(" *** switch control structure ***\n");
	printf("Enter integers : ");
	scanf("%d",&num);

	switch(num){
		case 0 : printf("Zero.");
			break;
		case 1 : printf("One, Two, or Three.");
			break;
		case 2 : printf("One, Two, or Three.");
			break;
		case 3 : printf("One, Two, or Three.");
			break;
		case 4 : printf("Four, Five, or Six.");
			break;
		case 5 : printf("Four, Five, or Six.");
			break;
		case 6 : printf("Four, Five, or Six.");
			break;
		default : printf("Greater than Six.");
			break;
	}
	


	return 0;
}