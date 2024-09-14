// #include<stdio.h>

// int main(){
//     char w1, w2, w3, w4, w5;
//     scanf("%c %c %c %c %c", &w1, &w2, &w3, &w4, &w5);
//     int aw1 = w1, aw3 = w3, aw5 = w5;
//     printf("%c\n", aw1+1);
//     printf("%c\n", w2);
//     printf("%c\n", aw3+1);
//     printf("%c\n", w4);
//     printf("%c", aw5+1);
// }
#include <stdio.h>
int main(){
    char first[30];
    char last[30];
    char stud[8];
    int dd, mm, yyyy;
    float gpa;
    scanf("%s", first);
    scanf("%s", last);
    scanf("%s", stud);
    scanf("%d/%d/%d/", &dd, &mm, &yyyy);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\nID: %s\nDOB: %d-%d-%d\nGPA: %.2f", first, last, stud, dd, mm, yyyy, gpa);
    return 0;
}
