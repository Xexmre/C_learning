#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer, input;
    srand(time(NULL));
    int a = (rand() % 10) * 10 + (rand() % 10), b = (rand() % 10) * 10 + (rand() % 10);
    int is_plus = (rand() % 10) % 2;
    /* 防止出现负数 */
    if (!is_plus && a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (!is_plus)
    {
        answer = a - b;
    }
    else
    {
        answer = a + b;
    }
    /* 输出算式 */
    printf("%d ", a);
    if (!is_plus)
    {
        printf("-");
    }
    else
    {
        printf("+");
    }
    printf(" %d = ", b);
    scanf("%d", &input);
    if (answer == input)
    {
        printf("你答对了");
    }
    else
    {
        printf("你答错了");
    }
    return 0;
}
