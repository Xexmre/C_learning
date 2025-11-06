#include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入a和b的值: ");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("a= %d\tb= %d\n", a, b);
    return 0;
}