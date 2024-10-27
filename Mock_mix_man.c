#include<stdio.h>
#include<string.h>

int finmax(int num1,int num2,int num3,int num4,int num5){
    int max_value = (num1 > num2) ? num1 : num2;
    max_value = (max_value > num3) ? max_value : num3;
    max_value = (max_value > num4) ? max_value : num4;
    max_value = (max_value > num5) ? max_value : num5;
    return max_value;
}
int finmin(int num1,int num2,int num3,int num4,int num5){
    int min_value = (num1 < num2) ? num1 : num2;
    min_value = (min_value < num3) ? min_value : num3;
    min_value = (min_value < num4) ? min_value : num4;
    min_value = (min_value < num5) ? min_value : num5;
    return min_value;
}
int main(){
    char want[4];
    int num1, num2, num3, num4, num5;
    scanf("%s %d %d %d %d %d", want, &num1, &num2, &num3, &num4, &num5);
    (!strcmp(want, "MAX")) ? printf("MAX : %d",finmax(num1, num2, num3, num4, num5)) : printf("MIN : %d", finmin(num1, num2, num3, num4, num5));
}