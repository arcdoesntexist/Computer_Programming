#include <stdio.h>
int main() {
    int num, i, j;
    printf("Input the number : ");
    scanf("%d", &num);
    for (i = 0; i < num - 1; i++) {
        printf("|");
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\\\n");
    }
    printf("|");
    for (j = 0; j < num - 1; j++) {
        printf("_");
    }
    printf("\\\n");
    return 0;
}
