#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertp(char word[102]){
    char result[102];
    for(int i =0;i<strlen(word);i++){
        if (islower(word[i])){
            result[i] = toupper(word[i]);
        }else if (isupper(word[i])){
            result[i] = tolower(word[i]);
        }else{
            result[i] = word[i];
        }
    }
    result[strlen(word)] = '\0';
    printf("%s\n", result);
}
int sumascii(char word[102]){
    int result = 0;
    for(int i=0;i<strlen(word);i++){
        result += tolower(word[i]);
    }
    return result;
}
int main(){
    char name[102], name2[102];
    scanf("%[^\n] %[^\n]", &name,&name2);
    printf("*** Results ***\n");
    convertp(name);
    convertp(name2);
    printf("***************\n");
    if(sumascii(name)==sumascii(name2)){
        printf("Both strings are the same.");
    }else{
        printf("Both strings are not the same.");
    }
}