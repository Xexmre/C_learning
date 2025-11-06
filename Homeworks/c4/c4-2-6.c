#include <stdio.h>
#include <math.h>

int main(void)
{
    int input_num, scan_return, digit, temp_num;
    printf("输入一个不多于5位的正整数: ");
    scan_return = scanf("%d", &input_num);
    printf("当前输入的正整数是: %d\n", input_num);
    /* 判断是否输入了一个数字 */
    if (scan_return != 1)
    {
        printf("输入无效: 你输入了%d个数字\n", scan_return);
        return -1;
    }
    /* 判断数字是否越界 */
    if (input_num >= 100000)
    {
        printf("输入无效: 不可超过五位数\n");
        return -1;
    }
    else if (input_num <= 0)
    {
        printf("输入无效: 不可小于等于0\n");
        return -1;
    }
    /* 判断数位 */
    for (int i = 4; i >= 0; --i)
    {
        temp_num = (int)(input_num / pow(10, i)) % 10;
        if (temp_num != 0)
        {
            digit = i + 1;
            break;
        }
    }
    /* 打印各位数字 */
    switch (digit)
    {
    case 5:
        printf("万位数是: %d\n", (int)(input_num / pow(10, 4)) % 10);
    case 4:
        printf("千位数是: %d\n", (int)(input_num / pow(10, 3)) % 10);
    case 3:
        printf("百位数是: %d\n", (int)(input_num / pow(10, 2)) % 10);
    case 2:
        printf("十位数是: %d\n", (int)(input_num / pow(10, 1)) % 10);
    case 1:
        printf("个位数是: %d\n", (int)(input_num / pow(10, 0)) % 10);
        break;
    }
    /* 逆序输出 */
    printf("逆序输出: ");
    for (int i = 0; i <= digit - 1; ++i)
    {
        printf("%d", (int)(input_num / pow(10, i)) % 10);
    }
    printf("\n");
    return 0;
}