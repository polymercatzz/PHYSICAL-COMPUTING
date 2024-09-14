#include <stdio.h>

int main(){
    char word[100];
    int i,len=0;
    scanf("%[^\n]", &word);
    while (word[len] != '\0')
    {
        len ++;
    }
    for(i=len-1;i>=0;i--){
        printf("%c", word[i]);
    }
   return 0;
}