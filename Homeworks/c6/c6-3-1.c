#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SINGLE_ROUND 10
int main()
{
    /* cheat_mod = 1 开启作弊模式 */
    /* debug_mod = 1 开启调试模式，固定题型 */
    int temp = 0, type = 3, n1, n2, ans, cheat_mode = 1, debug_mode = 1;
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        n1 = n2 = ans = 0;
        if (!debug_mode)
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
                ans = n1 - n2;
            }
            printf("%d - %d = ", n1, n2);
            break;
        case 2:
            n1 = rand() % 99 + 1;
            n2 = rand() % 99 + 1;
            ans = n1 * n2;
            printf("%d × %d = ", n1, n2);
            break;
        case 3:
            temp = 0;
            while (n1 >= 100 || n2 == 0)
            {
                n2 = rand() % 99 + 1;
                ans = rand() % 99 + 1;
                n1 = n2 * ans;
                ++temp;
            }
            printf("%d ÷ %d = ", n1, n2);
            break;
        }
        if (cheat_mode)
            printf("%d", ans);
        if (debug_mode)
            printf("\t%d retries", temp);
        printf("\n");
    }
    return 0;
}