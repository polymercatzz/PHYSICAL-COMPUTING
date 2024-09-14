#include<stdio.h>
#include<stdlib.h>

int main(){
    char str,*arr;
    int size=0;
    arr = (char *)malloc(sizeof(char)*2);
    scanf(" %c", &str);
    while(str != '-'){
        *(arr+size++) = str;
        char *temp = (char *)realloc(arr,sizeof(char)*(size+1));
        arr = temp;
        scanf(" %c", &str);
    }
    char *ptr = arr;
    *(arr + size) = '\0';
    while(*ptr){
        printf("%c",*ptr++);
    }
    printf("\n");
    while(*--ptr) {
        printf("%c", *ptr);
    }
    free(arr);
    return 0;
}
