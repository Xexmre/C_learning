#include <stdio.h>
int main(void)
{
    char class = -1;
    double score;
    int scan_return;
    printf("[input]\t输入成绩：");
    scan_return = scanf("%lf", &score);
    /* 判断是否输入了一个数字 */
    if (scan_return != 1)
    {
        printf("[error]\t成绩无效：你输入了%d个数字\n", scan_return);
        return -1;
    }
    else
    {
        printf("[info]\t当前输入的成绩是：%.2lf\n", score);
    }
    /* 判断数字是否越界 */
    if (score > 100)
    {
        printf("[error]\t成绩无效：不可大于100\n");
        return -1;
    }
    else if (score < 0)
    {
        printf("[error]\t成绩无效：不可小于0\n");
        return -1;
    }
    /* 使用if-else完成逻辑 */
    if (score >= 90)
        class = 'A';
    else if (score >= 80)
        class = 'B';
    else if (score >= 70)
        class = 'C';
    else if (score >= 60)
        class = 'D';
    else
        class = 'E';
    printf("[done]\t成绩为：%c\n", class);
    return 0;
}