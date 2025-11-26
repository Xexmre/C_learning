#include <stdio.h>
int main()
{
    double sum = 0, t = 1;
    for (int i = 1; i <= 20; ++i)
    {
        t = 1;
        for (int j = 1; j <= i; ++j)
        {
            t *= j;
        }
        sum += 1 / t;
        printf("%lf\n", sum);
    }
    return 0;
}
