#include <stdio.h>
#define SIZE 10
struct student {
    char id[10];
    char name[40];
    int marking;
};
int main() {
    struct student st[SIZE];
    int i;
    int max_marking = -1;
    int student_count = 0;
    int list_num = 1;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for (i = 0; i < SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }
    for (i = 0; i < SIZE; i++) {
        if (st[i].marking > max_marking) {
            max_marking = st[i].marking;
        }
    }
    printf("\n\n *** Analyzing Data ***\n");
    for (i = 0; i < SIZE; i++) {
        if (st[i].marking == max_marking) {
            student_count++;
        }
    }
    printf("Max marking   = %d points, %d students.\n", max_marking, student_count);
    for (i = 0; i < SIZE; i++) {
        if (st[i].marking == max_marking) {
            printf("%d. %s %s %d\n", list_num, st[i].id, st[i].name, st[i].marking);
            list_num++; // ??????????????????????????
        }
    }
    return 0;
}