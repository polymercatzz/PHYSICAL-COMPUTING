#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    scanf("A%d A%d",&x,&y);
    int sum = pow(2,y-x);
    printf("%d",sum);
    return 0;
}