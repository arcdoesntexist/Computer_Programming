#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool has_TA_in(char string[]);

int main() {
    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);
    if (has_TA_in(name))
        printf("You are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_TA_in(char string[]) {
    int len = strlen(string);
    return ( (string[0] == 'T' || string[0] == 't') &&
             (string[len - 1] == 'A' || string[len - 1] == 'a') );
}
