#include <stdio.h>
void main(){
    int x[10];
    int i,n,p,temp,z;
    printf(" *** Descending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for(i=0;i<10;i++){
		scanf("%d",&x[i]);
	}
	for (z=0;z<9;z++){
	 	for(p=0;p<9;p++){
			if (x[p]<x[p+1]){
				temp = x[p+1];
				x[p+1] = x[p];
				x[p] = temp;
			}
		}
	}
	printf("Output : ");
	for(n=0;n<10;n++){
		printf("%d ",x[n]);
	}	
    return 0;
}
