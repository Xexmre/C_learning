#include <stdio.h>
int main()
{
    int out = 0, i = 1;
    while (!out)
    {
        if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
        {
            printf("found: %d\n", i);
            out = i;
        }
        ++i;
    }
    return 0;
}