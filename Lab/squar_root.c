#include <stdio.h>

double square_root(double x)
{
    double y = x;
    for (int i = 0; i < 20; ++i)
    {
        y = (y + x / y) / 2;
        printf("( %.2lf + %.2lf / %.2lf ) / 2 = %.2f --> y\n", y, x, y, y);
    }
    return y;
}

int main(void)
{
    double number = 11.45;
    printf("The square root of %.2f is approximately %.5f\n", number, square_root(number));
    return 0;
}