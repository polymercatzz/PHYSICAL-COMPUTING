#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    char vala = *(char*)a;
    char valb = *(char*)b;
    return vala - valb;
}

int main() {
    char arr[200];
    scanf("%s",arr);
    int n = strlen(arr);
    qsort(arr, n, sizeof(char), compare);
    printf("%s", arr);
    return 0;
}
