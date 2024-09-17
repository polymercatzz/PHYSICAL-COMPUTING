#include<stdio.h>
#include<string.h>

typedef struct student_info{
    char name[61],lastname[61],sex[7],id[13];
    int age;
    double gpa;
}student_info;

int main(){
    student_info std;
    scanf("%s %s %s %d %s %lf",std.name,std.lastname,std.sex,&std.age,std.id,&std.gpa);
    if(!strcmp("Male",std.sex)){
        printf("Mr %c %s (%d) ID: %s GPA %.2lf",std.name[0],std.lastname,std.age,std.id,std.gpa);
    }else{
        printf("Miss %c %s (%d) ID: %s GPA %.2lf",std.name[0],std.lastname,std.age,std.id,std.gpa);
    }
    return 0;
}