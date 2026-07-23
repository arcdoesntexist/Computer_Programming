#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[100];
    printf("Enter a string : ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character
    text[strcspn(text, "\n")] = '\0';

    // Capital
    printf("Capital : ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", toupper(text[i]));
    }

    // Small
    printf("\nSmall : ");
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", tolower(text[i]));
    }

    // Title
    printf("\nTitle : ");
    int newWord = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            newWord = 1;
            printf("%c", text[i]);
        } else {
            if (newWord) {
                printf("%c", toupper(text[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(text[i]));
            }
        }
    }
}
