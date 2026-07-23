#include<stdio.h> 
int main() 
{ 
 int i,j;
 printf("Enter number : ");
 scanf("%d",&i);
 if (i<1){
 	printf("</3");
 }else{
 	for(j=0;j<i;j++)
 	printf("I Miss You\n");
 }
 return 0; 
}