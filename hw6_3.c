#include <stdio.h>
#include <string.h>

int main(){
    char word[100],revert[100];
    int len,i,k=0;
    scanf("%s", word);
    len = strlen(word);
    for (i=len-1;i>=0;i--){
        revert[k++] = word[i];
    }
    revert[k] = '\0';
    if (!strcmp(revert,word)){
        printf("It is Palindrome.");
    }else{
        printf("It is not Palindrome.");
    }
    return 0;
}