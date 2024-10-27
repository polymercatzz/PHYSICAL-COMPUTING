#include<stdio.h>

int main(){
    int bookid,lid2,lid3,lid1,mod4;
    scanf("%d",&bookid);
    mod4 = bookid % 4 == 0;
    lid1 = bookid % 10 == 0 || bookid % 10 == 5;
    lid2 = bookid % 10 == 3 || bookid % 10 == 7;
    lid3 = bookid % 100 == 11 || bookid % 100 == 22 || bookid % 100 == 33;
    if(bookid < 1000){
        if(lid1){
            printf("Science");
        }else if (lid2){
            printf("Literature");
        }else{
            printf("General Collection");
        }
    }else{
        if(mod4){
            printf("Reference");
        }else if (lid3){
            printf("History");
        }else{
            printf("Unclassified");
        }
    }
    return 0;
}