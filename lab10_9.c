#include<stdio.h>
#include<string.h>

typedef struct Count{
    int letters;
    int word;
    int line;
}Count;

int main(){
    Count count;
    count.letters = 0;
    count.word = 0;
    count.line = 0;
    char word[451];
    scanf(" %[^\n]",word);
    while(strcmp(word,".")){
        count.line++;
        for(int i=0;i<strlen(word);i++){
            if(word[i] == ' '){
                count.word++;
            }else{
                count.letters++;
            }
        }
        count.word++;
        scanf(" %[^\n]",word);
    }
    printf("Char = %d, word = %d, line = %d",count.letters,count.word,count.line);
    return 0;
}