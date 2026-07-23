#include <stdio.h>

void sort(int *ratings);

int main()
{
    int ratings[5];
    printf("Enter 5 rating : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ratings[i]);
}

void sort(int *ratings){
	int x,j,i;
	for (x=0;x<5-1;x++){
		for (j=0;j<5-1;j++){
			if (ratings[j]>ratings[j+1]){
			int temp;
			temp=ratings[j];
			ratings[j]=ratings[j+1];
			ratings[j+1]=temp;
			}
		}
	}
}