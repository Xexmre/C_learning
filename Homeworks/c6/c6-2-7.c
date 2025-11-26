#include <stdio.h>
int main()
{
    int in, out = 0;
    printf("input a number: ");
    scanf("%d", &in);
    while (in)
    {
        out *= 10;
        out += in % 10;
        in /= 10;
    }
    printf("%d\n", out);
    return 0;
}