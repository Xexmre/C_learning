#include <stdio.h>
#include <math.h>

int main(void)
{
    double h, w, t;
    printf("输入身高和体重: ");
    scanf("%lf%lf", &h, &w);
    t = w / (h * h);
    printf("体重类型: ");
    if (t < 18)
    {
        printf("低体重\n");
    }
    else if (t < 25)
    {
        printf("正常体重\n");
    }
    else if (t < 27)
    {
        printf("超重体重\n");
    }
    else
    {
        printf("肥胖体重\n");
    }
    return 0;
}