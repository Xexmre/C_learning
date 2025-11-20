#include <stdio.h>
#define MAX 20
int main()
{
    long long p=1,sum=0;
    for (int i = 1; i <= MAX; ++i) 
    {
        p*=i;
        sum+=p;
    }
    printf("%llu", sum);
    return 0;
}