#include <stdio.h>
#include <math.h>
double f(double x)
{
    // f(x) = x^3 - x^2 - 1
    return x * x * x - x * x - 1;
}
int main()
{
    double high = 99, low = -99, mid = 0;
    if (f(low) * f(high) < 0)
    {
        while (fabs(high - low) > 1e-6)
        {
            mid = (high + low) / 2;
            if (f(mid) * f(low) < 0)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        printf("The root is: %.6lf\n", mid);
    }
    else
    {
        printf("No root found.\n");
    }
    return 0;
}