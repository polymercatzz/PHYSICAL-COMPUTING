#include<stdio.h>

int main(){
    char name[101],lastname[101];
    scanf("%s %s",name,lastname);
    printf("%c.%c.",name[0],lastname[0]);
    return 0;
}