#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAXTRIES 1000000
int main()
{
    double x, y, d;
    int c = 0;
    srand(time(NULL));
    for (int i = 0; i <= MAXTRIES - 1; ++i)
    {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        d = sqrt(pow(x, 2) + pow(y, 2));
        if (d <= 1)
        {
            ++c;
        }
    }
    printf("%.2lf%% 的点落在了圆内\n", (double)c / MAXTRIES * 100);
    printf("pi = %lf", (double)c / MAXTRIES * 4);
    return 0;
}