#include <stdio.h>
#include <string.h>
 
int main(){
    int index,i=0,size=0,len;
    char lower[] = "abxypqrmncedkljoshtufvzgwi", upper[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI", word[200],now;
    char *chku, *chkl;
    scanf("%[^\n]", &word);
    len = strlen(word);
    for (i=0;i<len;i++){
        now = word[i];
        chku = strchr(upper, now);
        chkl = strchr(lower, now);
        if (chku){
            index = chku-upper+5;
            printf("%c", upper[index%26]);
        }else if (chkl){
            index = chkl-lower+5;
            printf("%c", lower[index%26]);
        }else{
            printf("%c", now);
        }
    }
    return 0;
}