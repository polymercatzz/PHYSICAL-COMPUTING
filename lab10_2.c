#include<stdio.h>
#include<string.h>
void printsame(int range,char text){
    int i=0;
    for(i=0;i<range;i++){
        printf("%c",text);
    }
}
void createtext(char text[],int range){
    int left,right,i;
    right = (range-strlen(text)-2)/2;
    left = (range-strlen(text)-2)-right;
    printf("*");
    printsame(left,' ');
    printf("%s",text);
    printsame(right,' ');
    printf("*\n");
}
int main(){
    int range,i;
    char text1[51],text2[41];
    scanf("%d %[^\n] %[^\n]",&range,text1,text2);
    printsame(range,'*');
    printf("\n");
    createtext(text1,range);
    createtext(text2,range);
    printsame(range,'*');
    return 0;
}