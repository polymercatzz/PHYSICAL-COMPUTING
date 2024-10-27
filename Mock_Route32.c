#include<stdio.h>

int main(){
    double position;
    scanf("%lf", &position);
    if(position < 0 || position > 150.545){
        printf("InValid");
    }else if(position <= 48.697){
        printf("Ayutthaya");
    }else if (position <= 66.456){
        printf("Ang Thong");
    }else if (position <= 85.9){
        printf("Sing Buri");
    }else if (position <= 111.936){
        printf("Lop Buri");
    }else if (position <= 150.019){
        printf("Chai Nat");
    }else if (position <= 150.545){
        printf("Nakhon Sawan");
    }
    return 0;
}