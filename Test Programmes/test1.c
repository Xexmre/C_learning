#include <stdio.h>
#define PI 3.1415926

int main(void)
{
    char c = 0;
    for (int i = 0; i <= 255; i++)
    {
        c = i;
        printf("%3d: %c\n", i, c);
    }
}