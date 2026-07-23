#include <stdio.h>
int main() {
    int n,i,j;
	printf("input (1-20)  : ");
    scanf("%d", &n);
    printf("\n");
    if (n<=0 || n>20) {
        printf("No Answer\n");
        return 0;
    }
    int count = 9;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("  %d", count);
            count--;
            if (count<1)
			count = 9;
        }
        printf("\n");
    }
    return 0;
}