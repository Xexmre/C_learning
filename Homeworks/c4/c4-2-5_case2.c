#include <stdio.h>
int main(void)
{
    char class = -1;
    double score;
    int input_return;
    printf("[input]\t输入成绩：");
    input_return = scanf("%lf", &score);
    printf("[info]\t当前输入的成绩是：%.2lf\n", score);
    /* 判断是否输入了一个数字 */
    if (input_return != 1)
    {
        printf("[error]\t成绩无效：你输入了%d个数字", input_return);
        return -1;
    }
    /* 判断数字是否越界 */
    if (score > 100)
    {
        printf("[error]\t成绩无效：不可大于100");
        return -1;
    }
    else if (score < 0)
    {
        printf("[error]\t成绩无效：不可小于0");
        return -1;
    }
    /* 使用switch完成逻辑 */
    switch ((int)(score / 10))
    {
    case 10:
    case 9:
        class = 'A';
        break;
    case 8:
        class = 'B';
        break;
    case 7:
        class = 'C';
        break;
    case 6:
        class = 'D';
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        class = 'E';
        break;
    }
    printf("[done]\t成绩为：%c", class);
    return 0;
}