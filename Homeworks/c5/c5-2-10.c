#include <stdio.h>
int main()
{
    double half_pi = 1, item = 2;
    for (int i = 1; item >= 1 + 1e-6; i += 2)
    {
        item = 1 + (double)(1) / i / (i + 2);
        printf("i = %d item =%lf\n", i, item);
        half_pi *= item;
    }
    printf("π = %lf", half_pi * 2);
    return 0;
}