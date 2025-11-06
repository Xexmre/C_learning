#include <stdio.h>
int main(void)
{
    int x, y;
    printf("请输入x: ");
    scanf("%d", &x);
    if (x < 1)
        y = x;
    else if (x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;
    printf("y = %d\n", y);
    return 0;
}