#include <stdio.h>

/* 整数反转 */
int reverse(int a)
{
    int b = 0;
    while (a)
        b = b * 10 + a % 10, a /= 10;
    return b;
}

/* 最大公约数 */
int gcd(int m, int n)
{
    int r;
    while ((r = m % n) != 0)
        m = n, n = r;
    return n;
}

/* 最小公倍数 */
int lcm(int m, int n)
{
    return m / gcd(m, n) * n;
}

/* 数位统计 */
int digits(int a)
{
    int b = 0;
    while (a)
        b++, a /= 10;
    return b;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("reverse: %d %d\n", reverse(a), reverse(b));
    printf("gcd: %d\n", gcd(a, b));
    printf("lcm: %d\n", lcm(a, b));
    printf("digits: %d %d\n", digits(a), digits(b));
    return 0;
}