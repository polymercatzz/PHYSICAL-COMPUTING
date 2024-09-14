#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char *arr,letter;
    int low=0,up=0,digit=0;
    arr = (char *)malloc(sizeof(char)*100);
    scanf(" %[^\n]s", arr);
    char *ptr = arr;
    while(*ptr){
        letter = *ptr++;
        if(islower(letter)){
            low++;
        }else if(isupper(letter)){
            up++;
        }else if(isdigit(letter)){
            digit++;
        }
    }
    printf("Lowercase letters: %d\n", low);
    printf("Uppercase letters: %d\n", up);
    printf("Digits: %d\n", digit);
    free(arr);
    return 0;
}
