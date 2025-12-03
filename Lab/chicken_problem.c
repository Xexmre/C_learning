#include <stdio.h>
#include <math.h>
#define m_cost 5
#define f_cost 3
#define c_cost 1.0 / 3.0
int main(void)
{
    int chicken = 100, m = 0, f = 0;
    double money = 100;
    // 4f + 7m = 3/2 money (money - c_cost * chicken)
    printf("4f + 7m = %.2lf", 3.0 / 2.0 * (money - c_cost * chicken));
    for (m = 0; m <= 100.0 / 7; m++)
    {
        
    }
    return 0;
}