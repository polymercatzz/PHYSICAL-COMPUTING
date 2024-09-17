#include<stdio.h>
#include<string.h>
 
int main() {
    char text[101], copy[101], before[101] = "";
    scanf("%[^\n]", text);
    while (strcmp(text, before)) {
        strcpy(before, text);
        int len = strlen(text), i = 0;
        int copyIndex = 0;
        for (i = 0; i < len; i++) {
            if (i < len - 1 && text[i] == text[i + 1]) {
                i++;
            } else {
                copy[copyIndex++] = text[i];
            }
        }
        copy[copyIndex] = '\0';
        strcpy(text, copy);
        if (strcmp(text, before)) {
            printf("%s\n", text);
        }
    }
    return 0;
}