#include <stdio.h>
int main() {
    int n;
    printf("Enter a number (1-16) : ");
    scanf("%d", &n);
    if (n < 1 || n > 16) {
        printf("Out of range ! ! !\n");
        return 0;
    }
    for (int i = n; i >= 1; i--) {
        if (i <= 9)
            printf("%d", i);
        else
            printf("%c", 'A' + (i - 10));
    }
    printf("\n");
    for (int i = 0; i < n - 2; i++) {
        if (n <= 9)
            printf("%d", n);
        else
            printf("%c", 'A' + (n - 10));
        for (int j = 0; j < n - 2; j++) {
            printf(" ");
        }
        if (1 <= 9)
            printf("%d\n", 1);
        else
            printf("%c\n", 'A' + (1 - 10));
    }
    for (int i = n; i >= 1; i--) {
        if (i <= 9)
            printf("%d", i);
        else
            printf("%c", 'A' + (i - 10));
    }
    printf("\n");
    return 0;
}
