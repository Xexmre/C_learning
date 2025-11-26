#include <stdio.h>
int main()
{
    int in;
    printf("input: ");
    scanf("%d", &in);
    while (in > 1)
    {
        for (int i = 2; i <= in; ++i)
        {
            if (in % i == 0)
            {
                printf("%d\n", i);
                in /= i;
                break;
            }
        }
    }
    return 0;
}