#include<stdio.h>
#include<math.h>

int main(){
    int num,i,j;
    scanf("%d ", &num);
    double value,temp=0,l_value[num],mean=0,median=0,sdevi=0;
    for(i = 0;i<num;i++){
        scanf(" %lf", &value);
        l_value[i] = value;
        mean += value;
    }
    mean /= num;
    for(i = 0; i<num-1;i++){
        for(j=0;j<num-1-i;j++){
            if(l_value[j] > l_value[j+1]){
                temp = l_value[j];
                l_value[j] = l_value[j+1];
                l_value[j+1] = temp;
            }
        }
    }
    if(num%2==0){
        median = (l_value[num/2]+l_value[num/2-1])/2;
    }else{
        median = l_value[num/2];
    }
    for(i = 0;i<num;i++){
        sdevi += pow((mean-l_value[i]),2);
    }
    printf("%.2lf\n%.2lf\n%.2lf",mean,median,sqrt(sdevi/num));
}