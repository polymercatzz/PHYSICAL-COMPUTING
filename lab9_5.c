#include<stdio.h>
#include<stdlib.h>

int main(){
    char *arr;
    arr = (char *)malloc(sizeof(char)*100);
    scanf(" %[^\n]s", arr);
    char *ptr = arr;
    while(*ptr){
        ptr++;
    }
    while(*--ptr) {
        printf("%c", *ptr);
    }
    free(arr);
    return 0;
}
