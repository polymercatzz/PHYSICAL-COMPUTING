#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char first[60],last[60],fullname[60],std[20][60],temp[60];
    int i,j;
    for (i=0;i<20;i++){
        scanf("%s %s", first, last);
        j=0;
        while (first[j] != '\0'){
            if(j==0){
                first[j] = toupper(first[j]);
            }else{
                first[j] = tolower(first[j]);
            }
            j++;
        }
        j=0;
        while (last[j] != '\0'){
            if(j==0){
                last[j] = toupper(last[j]);
            }else{
                last[j] = tolower(last[j]);
            }
            j++;
        }
        sprintf(fullname, "%s %s",first,last);
        strcpy(std[i], fullname);
    }
    for(i=0;i<19;i++){
        for (j=0;j<19-i;j++) {
            if (strcmp(std[j], std[j+1]) > 0) {
                strcpy(temp, std[j]);
                strcpy(std[j], std[j+1]);
                strcpy(std[j+1], temp);
            }
        }
    }
    for(i=0;i<20;i++){
        printf("%s\n", std[i]);
    }
    return 0;
}