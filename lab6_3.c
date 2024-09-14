#include <stdio.h>

int main(){
    double matrix1[3][3];
    int i;
    for(i=0;i<3;i++){
        scanf("%lf %lf %lf", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    }
    if (matrix1[0][0] == matrix1[1][1] && matrix1[1][1] == matrix1[2][2]){
        if (matrix1[0][1] == 0 && matrix1[0][2] == 0 && matrix1[1][0] == 0 && matrix1[1][2] == 0 && matrix1[2][0] == 0 && matrix1[2][1] == 0){
            printf("This is a scalar matrix");
        }else{
            printf("This is not a scalar matrix");
        }
    }else{
        printf("This is not a scalar matrix");
    }
    
    return 0;
}