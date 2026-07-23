#include <stdio.h>

int main() {
    int n;
    printf("Enter : ");
    scanf("%d", &n);
    if (n <= 0 || n > 20) {
        printf("No Answer\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = (i + j) % n + 1;
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
