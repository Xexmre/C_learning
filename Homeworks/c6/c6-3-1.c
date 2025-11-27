#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SINGLE_ROUND 10
/* 权重随机：让乘除法出题更自然 */
int rand_weighted()
{
    int r = rand() % 100; // 0~99

    if (r < 80)
    {
        // 80% → 1~9
        return (rand() % 9) + 1;
    }
    else
    {
        // 20% → 10~99
        return (rand() % 90) + 10;
    }
}
int main()
{
    int type = 3, n1, n2, ans, retries = 0, in_int, quit = 0,
        cheat_mode = 0,                     // cheat_mod = 1 显示答案  cheat_mod = 2 自动答题
        debug_mode_disable_random_type = 0, // debug_mode_disable_random_type = 1 固定题型
        debug_mode_display_retries = 0;     // debug_mode_display_retries = 1 显示重试次数
    char in_ch;
    srand(time(NULL));
    while (!quit)
    {
        for (int i = 0; i <= SINGLE_ROUND - 1; i++)
        {
            n1 = n2 = ans = 0;
            if (!debug_mode_disable_random_type)
                type = rand() % 4;
            /*
            type0 = "+"
            type1 = "-"
            type2 = "×"
            type3 = "÷"
            */
            switch (type)
            {
            case 0:
                n1 = rand() % 99 + 1;
                n2 = rand() % 99 + 1;
                ans = n1 + n2;
                printf("%d + %d = ", n1, n2);
                break;
            case 1:
                n1 = rand() % 99 + 1;
                n2 = rand() % 99 + 1;
                if (n1 < n2)
                {
                    n1 += n2;
                    n2 = n1 - n2;
                    n1 = n1 - n2;
                }
                ans = n1 - n2;
                printf("%d - %d = ", n1, n2);
                break;
            case 2:
                n1 = rand_weighted();
                n2 = rand_weighted();
                ans = n1 * n2;
                printf("%d × %d = ", n1, n2);
                break;
            case 3:
                retries = -1;
                while (n1 >= 100 || n2 == 0)
                {
                    n2 = rand_weighted();
                    ans = rand_weighted();
                    n1 = n2 * ans;
                    ++retries;
                }
                if (debug_mode_display_retries && retries > 0)
                    printf("(%d retries) ", retries);
                printf("%d ÷ %d = ", n1, n2);
                break;
            }
            /* 判断如何答题 */
            switch (cheat_mode)
            {
            case 2:
                printf("%d", ans);
                break;
            case 1:
                printf("(%d) ", ans);
            default:
                scanf("%d", &in_int);
                if (in_int == ans)
                {
                    printf("正确！\n");
                }
                else
                {
                    printf("错误！\n");
                }
                break;
            }
            if (cheat_mode == 2)
                printf("\n");
        }
        printf("继续答题？(Y/N) ");
        quit = 1;
        scanf(" %c", &in_ch); // %c前的空格很重要！忽略前面所有的空白字符
        if (in_ch == 'Y')
        {
            quit = 0;
        }
    }
    return 0;
}