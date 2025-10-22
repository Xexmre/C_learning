#include <stdio.h>
int main(void){
    char ch;
    printf("Input ch:");
    ch = getchar();
    ch = ch - 'A' + 'a'; /* 创新方法：直接套用大小写字母的值，这样不需要知道大小写字母之间相隔多少 */
    putchar(ch);
    printf("\nch=%d",ch);
    return 0;
}