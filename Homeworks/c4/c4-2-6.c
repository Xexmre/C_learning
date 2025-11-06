#include <stdio.h>
#include <math.h>
int main(void)
{
    int input_num, scan_return;
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
    /* 打印各位数字 */
    for (int i = 0; i <= 4; ++i)
    {
        printf("[out]\t第%d位数字为：%d\n", i + 1, (int)(input_num / pow(10, i)) % 10);
    }
    return 0;
}
