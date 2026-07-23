#include <stdio.h>
int main(){
	int i,n[10];
	printf("Enter number : ");
	for (i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	for (i=0;i<10;i++){
		if (n[i]>5){
			printf("%d\n",n[i]);
		}
	}
	return 0;
}