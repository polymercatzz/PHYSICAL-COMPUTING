#include<stdio.h>
#include<string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int num,i;
    char id[10];
    scanf("%d ",&num);
    scanf(" %s",id);
    struct Book b[num];
    for(i=0;i<num;i++){
        scanf(" %s %s %s",b[i].id,b[i].name,b[i].author);
    }
    for(i=0;i<num;i++){
        if(!strcmp(id,b[i].id)){
            printf("%s %s %s",b[i].id,b[i].name,b[i].author);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}