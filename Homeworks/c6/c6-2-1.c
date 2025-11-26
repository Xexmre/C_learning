#include <stdio.h>
int main()
{
    int i, j, k;
    /************found************/
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 10 - i; j++)
            printf(" ");
        /************found************/
        for (k = 0; k <= (i * 2); k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
