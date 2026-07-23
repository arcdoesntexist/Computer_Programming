#include<stdio.h>
int main(){
	int n[10];
	int i ;
	int j ;
	printf("* Frequency of negative number change to positive number *\n");
	printf("Enter numbers : ");
	for (i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	for (i=0;i<9;i++){
		if(n[i]<0&&n[i+1]>0){
			j++;
		}
	}
	printf("negative to positive frequency = %d\n",j);
	return 0;
}