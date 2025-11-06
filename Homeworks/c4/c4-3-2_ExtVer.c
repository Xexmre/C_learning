#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STYLE_INFO "\033[0;30m"
#define STYLE_ERROR "\033[0;31m"
#define STYLE_RESET "\033[0m"

int rand_single(void)
{
    return rand() % 10;
}

int main(void)
{
    int answer, input;
    srand(time(NULL));
    int a = rand_single() * 10 + rand_single(), b = rand_single() * 10 + rand_single();
    int is_plus = rand_single() % 2;
    /* 防止出现负数 */
    if (!is_plus && a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    answer = is_plus ? a + b : a - b;
    printf(STYLE_INFO "[info]\ta= %d  b= %d  is_plus= %d  answer= %d\n" STYLE_RESET, a, b, is_plus, answer);
    /* 输出算式 */
    printf("[out]\t%d ", a);
    printf(is_plus ? "+" : "-");
    printf(" %d = ", b);
    scanf("%d", &input);
    printf(answer == input ? "[done]\t你答对了\n" : "[done]\t你答错了\n");
    return 0;
}
