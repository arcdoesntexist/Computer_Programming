#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[100];
    printf("Enter a string : ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';

    printf("Capital : ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", toupper(text[i]));
    }

    printf("\nSmall : ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", tolower(text[i]));
    }
}
