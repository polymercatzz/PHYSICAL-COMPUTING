#include<stdio.h>

int main(){
    char name1[50], lname1[50];
    char name2[100], name3[100];
    scanf("%s %s %[^\n] %[^\n]", name1, lname1, name2, name3);
    printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", name1, lname1, name2, name3);
}