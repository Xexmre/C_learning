#include <stdio.h>
#include <math.h>
#define MAX_DAY 30
int main()
{
    int cent_receive, cent_give = 1e7, sum_receive = 0, sum_give = 0;
    for (int day = 1; day <= MAX_DAY; ++day)
    {
        cent_receive = pow(2, day - 1);
        printf("day= %2d  receive= %d\n", day, cent_receive);
        sum_receive += cent_receive;
        sum_give += cent_give;
    }
    printf("富翁 --> 陌生人: %.2f\n陌生人 --> 富翁: %.2f\n", sum_receive/(double)(100), sum_give/(double)(100));
    return 0;
}