#include<stdio.h>

int main(){
    int i=0;
    char name[151];
    scanf("%[^\n]",name);
    while(name[i] != '\0'){
        if(name[i] != ' '){
            printf("%c",name[i]);
        }
        i++;
    }
    return 0;
}