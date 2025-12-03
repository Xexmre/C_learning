#include <stdio.h>
#define MAX 20
int main()
{
    int a, b = 1, c = 2;
    double sum = 0.0;
    for (int i = 1; i <= MAX; ++i)
    {
        sum += (double)(b) / c;
        printf("%2i : %d / %d\n", i, c, b);
        a = b, b = c, c = a + b;
    }
    printf("sum=%lf\n", sum);
    return 0;
}