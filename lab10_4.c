#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char input_text[151],text[151]="",array[150][151];
    int count=0,len;
    scanf("%[^\n]",input_text);
    for(int i = 0;i<=strlen(input_text);i++){
        char letter = tolower(input_text[i]);
        if(letter != ' ' && letter != '\0'){
            sprintf(text, "%s%c", text,letter);
        }else{
            strcpy(array[count],text);
            sprintf(text, "%s", "");
            count ++;
        }
    }
    printf("%d words\n----\n",count);
    for(int i=0;i<count;i++){
        len = strlen(array[i]);
        printf("%s : %d\n",array[i],len);
    }
}
