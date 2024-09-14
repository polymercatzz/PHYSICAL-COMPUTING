#include<stdio.h>

int calcu(int num){
    if(num<=1){
        return 1;
    }else{
        return calcu(num-1) +calcu(num-2);
    }
}
int main(){
    int num;
    scanf("%d", &num);
    printf("method = %d", calcu(num));
}