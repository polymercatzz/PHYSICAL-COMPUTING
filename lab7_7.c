#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char name[60],fullname[60],temp[60];
    int i,j,num;
    scanf("%d ",&num);
    char std[num][60];
    for(i=0;i<num;i++){
        scanf(" %[^\n]", name);
        for(j=0;j<strlen(name);j++){
            if(j == 0 || name[j-1] == ' '){
                fullname[j] = toupper(name[j]);
            }else{
                fullname[j] = tolower(name[j]);
            }
        }
        fullname[j] = '\0';
        strcpy(std[i], fullname);
    }
    for(i=0;i<num-1;i++){
        for (j=0;j<num-1-i;j++) {
            if (strcmp(std[j], std[j+1]) > 0) {
                strcpy(temp, std[j]);
                strcpy(std[j], std[j+1]);
                strcpy(std[j+1], temp);
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%s\n", std[i]);
    }
    return 0;
}