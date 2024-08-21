#include<stdio.h>

int main(){
    int num,i,j;
    scanf("%d ", &num);
    double value,temp=0,l_value[num];
    for(i = 0;i<num;i++){
        scanf(" %lf", &value);
        l_value[i] = value;
    }
    for(i = 0; i<num-1;i++){
        for(j=0;j<num-1-i;j++){
            if(l_value[j] > l_value[j+1]){
                temp = l_value[j];
                l_value[j] = l_value[j+1];
                l_value[j+1] = temp;
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%.2lf ",l_value[i]);
    }
}