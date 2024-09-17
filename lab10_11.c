#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

typedef struct student_info{
    char name[61],lastname[61],sex[7],id[13];
    int age;
    double gpa;
}student_info;

int comparename(const void *a, const void *b){
    student_info *std_a = (student_info*)a;
    student_info *std_b = (student_info*)b;
    return strcmp(std_a->name,std_b->name);
}
int comparelastname(const void *a, const void *b){
    student_info *std_a = (student_info*)a;
    student_info *std_b = (student_info*)b;
    return strcmp(std_a->lastname,std_b->lastname);
}
int compareid(const void *a, const void *b){
    student_info *std_a = (student_info*)a;
    student_info *std_b = (student_info*)b;
    return strcmp(std_a->id,std_b->id);
}
int main(){
    student_info std[20];
    char sort[8];
    for(int i=0;i<20;i++){
        scanf("%s %s %s %d %s %lf",std[i].name,std[i].lastname,std[i].sex,&std[i].age,std[i].id,&std[i].gpa);
    }

    scanf("%s",sort);
    for(int i=0;i<strlen(sort);i++){
        sort[i] = tolower(sort[i]);
    }

    if(!strcmp("name",sort)){
        qsort(std, 20, sizeof(std[0]), comparename);
    }else if(!strcmp("surname",sort)){
        qsort(std, 20, sizeof(std[0]), comparelastname);
    }else{
        qsort(std, 20, sizeof(std[0]), compareid);
    }
    
    for(int i=0;i<20;i++){
        if(!strcmp("Male",std[i].sex)){
            printf("Mr %c %s (%d) ID: %s GPA %.2lf\n",std[i].name[0],std[i].lastname,std[i].age,std[i].id,std[i].gpa);
        }else{
            printf("Miss %c %s (%d) ID: %s GPA %.2lf\n",std[i].name[0],std[i].lastname,std[i].age,std[i].id,std[i].gpa);
        }
    }
    return 0;
}