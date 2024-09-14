#include <stdio.h>

int main(){
    char word[300];
    char want,convert,pwant;
    int posi[300],i,len=0,count=0;
    scanf("%[^\n]", word);
    getchar();
    scanf("%c", &want);
    pwant = want;
    if(want >= 'A' && want <= 'Z'){
            want += 32;
        }
    while (word[len] != '\0'){
        len ++;
    }
    for(i=0;i<len;i++){
        convert = word[i];
        if(convert >= 'A' && convert <= 'Z'){
            convert += 32;
        }
        if (convert == want){
            posi[count] = i+1;
            count ++;
        }
    }
    if (count){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", count,pwant);
        for(i=0;i<count;i++){
            if (i != count-1){
                printf("%d, ", posi[i]);
            }else{
                printf("%d", posi[i]);
            }
        }
    }else{
        printf("Not found.");
    }
    return 0;
}
