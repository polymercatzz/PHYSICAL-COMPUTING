#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char text[2001];
    char *cat;
    int index = 0,f=0;
    scanf("%[^\n]",text);
    for (int i=0;i<strlen(text);i++){
        text[i] = tolower(text[i]);
    }
    while(strstr(text+index,"cat")){
        cat = strstr(text+index,"cat");
        index = cat-text;
        if(index && f){
            printf(", %d",index);
        }else{
            printf("%d",index);
            f = 1;
        }
        index += 3;
    }
    return 0;
}