#include <stdio.h>
#include <math.h>
int main(void)
{
    int input_num, scan_return,digit;
    printf("[input]\t输入一个不多于5位的正整数：");
    scan_return = scanf("%d", &input_num);
    printf("[info]\t当前输入的正整数是：%d\n", input_num);
    /* 判断是否输入了一个数字 */
    if (scan_return != 1)
    {
        printf("[error]\t输入无效：你输入了%d个数字\n", scan_return);
        return -1;
    }
    /* 判断数字是否越界 */
    if (input_num >= 100000)
    {
        printf("[error]\t输入无效：不可超过五位数\n");
        return -1;
    }
    else if (input_num <= 0)
    {
        printf("[error]\t输入无效：不可小于等于0\n");
        return -1;
    }
    /* 判断数位 */
    if (((input_num / 10000) % 10) != 0)
    {
        digit = 5;
    } else if(((input_num / 1000) % 10) != 0) {
        digit = 4;
    } else if(((input_num / 100) % 10) != 0) {
        digit = 3;
    } else if(((input_num / 10) % 10) != 0) {
        digit = 2;
    } else if(((input_num / 1) % 10) != 0) {
        digit = 1;
    printf("%d\n",digit);
    /* 打印各位数字 */
    
    return 0;
}
