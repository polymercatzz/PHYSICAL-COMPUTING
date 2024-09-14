#include<stdio.h>
#include<math.h>

int main(){
    double num1,num2,result;
    scanf("%lf %lf",&num1,&num2);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf",num1,num2,sqrt(pow(num1,2)+pow(num2,2)));
}