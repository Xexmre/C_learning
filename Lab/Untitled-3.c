#include <stdio.h>
#include <math.h>
#define STYLE_INFO "\033[0;30m"
#define STYLE_ERROR "\033[0;31m"
#define STYLE_RESET "\033[0m"

int get_digit_at_pos(int, int);

int main(void)
{
    int input_num, scan_return, digit = 0, temp_num, input_reverse = 0;
    printf("[input]\t输入一个正整数: ");
    scan_return = scanf("%d", &input_num);
    printf(STYLE_INFO "[info]\t当前输入的正整数是: %d\n" STYLE_RESET, input_num);
    /* 判断是否输入了一个数字 */
    if (scan_return != 1)
    {
        printf(STYLE_ERROR "[error]\t输入无效: 你输入了%d个数字\n" STYLE_RESET, scan_return);
        return -1;
    }
    /* 判断数字是否越界 */
    if (input_num <= 0)
    {
        printf(STYLE_ERROR "[error]\t输入无效: 不可小于等于0\n" STYLE_RESET);
        return -1;
    }
    /* 判断数位 */
    temp_num = input_num;
    digit = 1;
    printf(STYLE_INFO "[info]\ttemp = %d\tdigit = %d\n" STYLE_RESET, temp_num, digit);
    while (temp_num >= 10)
    {
        temp_num /= 10;
        digit++;
        printf(STYLE_INFO "[info]\ttemp = %d\tdigit = %d\n" STYLE_RESET, temp_num, digit);
    }
    printf(STYLE_INFO "[info]\t输入值位数: %d\n" STYLE_RESET, digit);
    /* 打印各位数字 */
    for (int i = 0; i <= digit - 1; ++i)
    {
        printf("[out]\t第%d位是: %d\n", i + 1, get_digit_at_pos(input_num, i));
    }
    /* 逆序输出 */
    for (int i = 0; i <= digit - 1; ++i)
    {
        input_reverse *= 10;
        input_reverse += get_digit_at_pos(input_num, i);
        printf(STYLE_INFO "[info]\ti= %d --> %d\treverse = %d\n" STYLE_RESET, i, get_digit_at_pos(input_num, i), input_reverse);
    }
    printf("[done]\t逆序输出: %d\n", input_reverse);
    return 0;
}

int get_digit_at_pos(int num, int digit_index)
{
    return (int)(num / pow(10, digit_index)) % 10;
}