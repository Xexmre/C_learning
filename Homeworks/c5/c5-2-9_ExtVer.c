#include <stdio.h>
#define MAX 20
long long factorial(int); // 只有long long装得下
int main()
{
    int plus = 0;
    long long sum = 0;
    for (int i = 1; i <= MAX; ++i)
    {
        if (plus)
            printf("+ ");
        printf("!%d --> %llu\n", i, factorial(i));
        plus = 1;
        sum += factorial(i);
    }
    printf("= %llu", sum);
    return 0;
}
long long factorial(int i)
{
    long long out = 1;
    while (i)
    {
        out *= i;
        --i;
    }
    return out;
}