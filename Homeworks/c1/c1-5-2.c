/* 使用了键盘读取的方式输入 */

#include <stdio.h>

int main(void){
    int a, b;
    printf("[input]请输入两个数，并用空格分隔：");
    scanf("%d %d", &a, &b);
    if (a >= b){
        printf("[output]更大的数字是：%d\n", a);
    } else {
        printf("[output]更大的数字是：%d\n", b);
    }
    return 0;
}