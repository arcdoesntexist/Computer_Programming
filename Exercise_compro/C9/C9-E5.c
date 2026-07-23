#include <stdio.h>
void add_word(char *txt,char *verb);

int main()
{
    char text[50] = "I";
    char verb[20];
    printf("Enter verb : ");
    scanf("%s", verb);
    add_word(text, verb);
    add_word(text, "You");
    printf("Your text  : %s", text);
}

void add_word(char *txt,char *verb){
	strcat(txt, " ");
	strcat(txt, verb);
}