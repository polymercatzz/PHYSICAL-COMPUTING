#include<stdio.h>

int main(){
    char word[5];
    scanf(" %s", word);
    printf("%.1s%80s%.2s%79s%.3s%78s%.4s%77s%s", word, "", word, "", word, "", word, "", word);
}