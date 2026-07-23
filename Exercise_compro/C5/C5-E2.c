#include <stdio.h>
int main() {
    char name[21];
    int i = 0;
    printf("Enter your name : ");
    scanf("%20s", name);
    while (name[i] != '\0') {
        char ch = name[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch-32; 
        }
        printf("%c\n", ch);
        i++;
    }
    printf("Name length : %d\n", i);
    return 0;
}
