#include <stdio.h>

int main(){
    double matrix1[3][3],matrix2[3][3],result,num1,num2,num3;
    int i,j,k;
    for(i=0;i<3;i++){
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        matrix1[i][0] = num1;
        matrix1[i][1] = num2;
        matrix1[i][2] = num3;
    }
    for(i=0;i<3;i++){
        scanf("%lf %lf %lf", &num1, &num2, &num3);
        matrix2[i][0] = num1;
        matrix2[i][1] = num2;
        matrix2[i][2] = num3;
    }
    printf("A x B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result = 0;
            for(k=0;k<3;k++){
                result += matrix1[i][k]*matrix2[k][j];
            }
            printf("%.2lf ", result);
        }
        printf("\n");
    }
    return 0;
}
