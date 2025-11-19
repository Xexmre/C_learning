#include <stdio.h>

int gcd(int m, int n)
{
    int r;
    while ((r = m % n) != 0)
        m = n, n = r;
    return n;
}

int lcm(int m, int n)
{
    return m / gcd(m, n) * n;
}

int main(void)
{
    int a, b;
    printf("输入两个整数: ");
    scanf("%d%d", &a, &b);
    printf("最大公约数: %d\n", gcd(a, b));
    printf("最小公倍数: %d\n", lcm(a, b));
    return 0;
}