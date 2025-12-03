#include <stdio.h>
#include <math.h>
int main(void)
{
    int chicken = 100, m = 0, f = 0;
    double money = 100;
    // 4f + 7m = 3/2 money (money - c_cost * chicken)
    for (f = 0; f <= (3.0 / 2.0 * (money - 1.0 / 3.0 * chicken) / 4); f++)
    {
        if ((100 - 4 * f) % 7 == 0)
        {
            m = (100 - 4 * f) / 7;
            printf("公鸡 = %d, 母鸡 = %d, 小鸡= %d\n", m, f, 100 - m - f);
        }
    }
    return 0;
}