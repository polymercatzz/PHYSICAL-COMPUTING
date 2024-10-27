#include<stdio.h>
#include<string.h>

int main(){
    char allletter[53],ch[500],*position;
    int countlette[52] = {0},i=0;
    for(char letter = 'a';letter <= 'z'; letter++){
        allletter[i++] = letter;
        allletter[i++] = letter-32;
    }
    allletter[i] = '\0';
    scanf("%[^\n]", ch);
    i = 0;
    while(ch[i] != '\0'){
        position = strchr(allletter,ch[i++]);
        if (position != NULL) {
            int index = position - allletter;
            countlette[index]++;
        }
    }
    for(i = 0; i < 52; i++){
        if(countlette[i] > 0){
            printf("%c = %d\n", allletter[i], countlette[i]);
        }
    }
    return 0;
}