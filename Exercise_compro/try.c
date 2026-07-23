#include <stdio.h>
int main()
{
    int num,count,i,sum=0;
    printf("Enter 'number' and 'count' : ");
    scanf("%d %d", &num,&count);
    if (count < 0){
    	printf("I can move on");
	}
	else{
		for (i=0;i<count;i++){
			sum += num;
			printf("%d",num);
			if (i < count - 1){
				printf(" + ");
			}
		}
	}
	printf(" = %d",sum);
    return 0;
    
}