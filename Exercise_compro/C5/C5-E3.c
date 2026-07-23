#include <stdio.h>
int main(){
	char str[300];
	int size,i;
	printf(" *** To Upper Case ***\n");
	printf("Enter a string : ");
	scanf("%[^\n]",str);
	printf("Output : ");
	for(size = 0; str[size] !='\0';size++);
	for(i=0;i<size;i++){
		if(str[i]>=97 && str[i]<=122){
			printf("%c",str[i]-32);
		}else{
			printf("%c",str[i]);
		}
	}
}