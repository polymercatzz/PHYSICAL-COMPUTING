#include<stdio.h>
#include<math.h>

int main(){
    int degree,u;
    double hight,pi=3.141592653589793;
    scanf("%d %d",&degree,&u);
    printf("theta (degree) : %d\nu (m/s) : %d\n",degree,u);
    hight = pow(u,2)*pow(sin(degree*pi/180),2)/(2*9.81);
    printf("h (m) : %.4lf",hight);
}
