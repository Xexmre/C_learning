#include <stdio.h>
#include <math.h>
#define STYLE_INFO "\033[0;30m"
#define STYLE_ERROR "\033[0;31m"
#define STYLE_RESET "\033[0m"

int get_digit_at_pos(int, int);

int main(void)
{
    int input_num, scan_return, digit, temp_num;
    printf("[input]\t输入一个不多于5位的正整数: ");
    scan_return = scanf("%d", &input_num);
    printf(STYLE_INFO "[info]\t当前输入的正整数是: %d\n" STYLE_RESET, input_num);
    /* 判断是否输入了一个数字 */
    if (scan_return != 1)
    {
        printf(STYLE_ERROR "[error]\t输入无效: 你输入了%d个数字\n" STYLE_RESET, scan_return);
        return -1;
    }
    /* 判断数字是否越界 */
    if (input_num >= 100000)
    {
        printf(STYLE_ERROR "[error]\t输入无效: 不可超过五位数\n" STYLE_RESET);
        return -1;
    }
    else if (input_num <= 0)
    {
        printf(STYLE_ERROR "[error]\t输入无效: 不可小于等于0\n" STYLE_RESET);
        return -1;
    }
    /* 判断数位 */
    for (int i = 4; i >= 0; --i)
    {
        temp_num = get_digit_at_pos(input_num, i);
        printf(STYLE_INFO "[info]\t索引%d\t值: %d" STYLE_RESET, i, temp_num);
        if (temp_num != 0)
        {
            digit = i + 1;
            printf(STYLE_INFO " <-- 找到了第一个有效数字！\n" STYLE_RESET);
            break;
        }
        printf("\n");
    }
    printf(STYLE_INFO "[info]\t输入值位数: %d\n" STYLE_RESET, digit);
    /* 打印各位数字 */
    switch (digit)
    {
    case 5:
        printf("[out]\t万位数是: %d\n", get_digit_at_pos(input_num, 4));
    case 4:
        printf("[out]\t千位数是: %d\n", get_digit_at_pos(input_num, 3));
    case 3:
        printf("[out]\t百位数是: %d\n", get_digit_at_pos(input_num, 2));
    case 2:
        printf("[out]\t十位数是: %d\n", get_digit_at_pos(input_num, 1));
    case 1:
        printf("[out]\t个位数是: %d\n", get_digit_at_pos(input_num, 0));
        break;
    }
    /* 逆序输出 */
    printf("[done]\t逆序输出: ");
    for (int i = 0; i <= digit - 1; ++i)
    {
        printf("%d", get_digit_at_pos(input_num, i));
    }
    printf("\n");
    return 0;
}

int get_digit_at_pos(int num, int digit_index)
{
    return (int)(num / pow(10, digit_index)) % 10;
}