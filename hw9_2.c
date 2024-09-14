#include<stdio.h>
#include<stdlib.h>

int main(){
    char *arr;
    int size,step;
    scanf("%d %d ", &size,&step);
    arr = (char *)malloc(sizeof(char)*(size+1));
    scanf(" %[^\n]s", arr);
    char *ptr = arr;
    while(ptr<arr+size){
        printf("%c",*ptr);
        ptr += step;
    }
    free(arr);
    return 0;
}
