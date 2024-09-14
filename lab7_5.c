#include<stdio.h>

double findMin(double array[], int size){
    double min=array[0];
    for (int i=1; i<size;i++){
        if(min>array[i]){
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int size){
    double max=array[0];
    for (int i=1; i<size;i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int size){
    double avg=0;
    for (int i=0; i<size;i++){
        avg += array[i];
    }
    avg/=size;
    return avg;
}

double getValue(){
    double value;
    scanf(" %lf", &value);
    return value;
}

int main(){
    int n;
    scanf("%d ", &n);

    double array[n];
    for (int i=0;i<n;i++){
        array[i] = getValue();
    }
    double min=0,max=0,avg=0;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf",n,min,max,avg);
    return 0;
}