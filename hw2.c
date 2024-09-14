#include <stdio.h>

int main(){
    char word[5];
    scanf(" %s", word);
    printf("%s%.2s", word+2, word);
}