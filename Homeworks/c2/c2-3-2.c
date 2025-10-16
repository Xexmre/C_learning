#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("test.txt","w");
    printf("春眠不觉晓\n");
    printf("处处闻啼鸟\n");
    printf("夜来风雨声\n");
    printf("花落知多少\n");
    fprintf(fp, "春眠不觉晓\n");
    fprintf(fp, "处处闻啼鸟\n");
    fprintf(fp, "夜来风雨声\n");
    fprintf(fp, "花落知多少\n");
    fclose(fp);
    return 0;
}