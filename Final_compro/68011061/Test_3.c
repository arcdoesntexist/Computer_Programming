#include <stdio.h>
struct student {
    char id[9];
    char name[40];
    int marking;
};

int main(){
	struct student students[10];
	int i,x=1;
	int min_score = 101;
	int count = 0;
	printf(" *** Structure Array  ***\n");
	printf("Enter data : ");
	for(i=0;i<10;i++) {
        scanf("%s %s %d",&students[i].id,&students[i].name,&students[i].marking);
	}
	for(i=0;i<10;i++) {
		if(students[i].marking < min_score){
			min_score = students[i].marking;
		}
	}
	for(i=0;i<10;i++) {
		if(students[i].marking == min_score){
			count++;
		}
	}
	printf("\n\n *** Analyzing Data ***\n");
	printf("Min marking = %d points, %d students.\n",min_score,count);
	for(i=0;i<10;i++){
		if(students[i].marking == min_score){
			printf("%d. %s %s %d\n",x,students[i].id,students[i].name,students[i].marking);
			x++;
		}
	}
}
