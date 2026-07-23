 #include<stdio.h>
 int main()
 {
	int num,i,m,j;
	printf(" *** Show isosceles triangle ***\n");
	printf("Enter a counting number : ");
	scanf("%d",&num);
	j=0;
	if (num > 3){
		printf("Output :\n");
		for(i=1;i<=num;i++){
			for(m=0;m<(num-i);m++)
				printf(" ");
			for(m=-1;m<(j);m++)
				printf("*");
			j+=2;
		printf("\n");
		}
	}
	else{
		printf(" --- Incorrect number. ---");
	}
 	return 0;
 }