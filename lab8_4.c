#include <stdio.h>

int main(){
    int sbp,dbp;
    scanf("%d %d",&sbp,&dbp);
    if (sbp > 140 || dbp > 90){
        printf("Hypertension");
    }else{
        printf("Normal");
    }
}