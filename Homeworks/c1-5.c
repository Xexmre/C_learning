#include <stdio.h>

int main(void){
    int a, b;
    FILE *file;
    file = fopen("test.txt","r");
    fscanf(file, "%d %d", &a, &b);
    if (a >= b){
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
    fclose(file);
    return 0;
}