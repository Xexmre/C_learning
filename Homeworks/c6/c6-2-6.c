#include <stdio.h>
#include <math.h>
#define MAX 9999
int main()
{
    int sum, t;
    for (int i = 1; i <= MAX; ++i)
    {
        t = i, sum = 0;
        while (t)
        {
            sum += pow(t % 10, 3);
            t /= 10;
        }
        if (sum == i)
        {
            printf("%d is a Narcissistic number\n", i);
        }
    }
    return 0;
}
