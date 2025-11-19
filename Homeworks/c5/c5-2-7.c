#include <stdio.h>
int main()
{
    int m, n, s = 0;
    printf("Input: ");
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        m += n;
        n = m - n;
        m -= n;
    }
    for (int i = m; i <= n; i++)
    {
        if (i % 3 != 0 && i % 7 != 0)
            s += i;
    }
    printf("Sum is: %d \n", s);
    return 0;
}