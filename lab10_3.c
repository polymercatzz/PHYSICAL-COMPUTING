// Lab 10-03 String Count
#include<stdio.h>
#include<ctype.h>

int main(){
    int i,result;
    char w_letter,word[151],letter;
    scanf("%c %[^\n]",&w_letter,word);
    w_letter = tolower(w_letter);
    while(word[i] != '\0'){
        letter = tolower(word[i]);
        if(w_letter == letter){
            result++;
        }
        i++;
    }
    printf("%d",result);
    return 0;
}