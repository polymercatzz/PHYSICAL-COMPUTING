#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int num,i,index,much=0;
    char *chk;
    scanf("%d", &num);
    char letter[num],word;
    int lettern[num];
    for (i=0;i<num;i++){
        scanf(" %c", &word);
        word = tolower(word);
        chk = strchr(letter, word);
        if (chk){
            index = chk-letter;
            lettern[index]++;
        }else{
            letter[much] = word;
            lettern[much] = 1;
            much++;
        }
    }
    for (i=0;i<much;i++){
        printf("%c: %d\n", letter[i], lettern[i]);
    }
}