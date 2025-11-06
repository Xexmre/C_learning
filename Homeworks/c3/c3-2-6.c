#include <stdio.h>
#define pi 3.1415926
int main(void)
{
    double r = 0, h = 0, c = 0, s = 0, v = 0;
    printf("输入圆柱半径和高: ");
    scanf("%lf%lf", &r, &h);
    c = r * 2 * pi;
    s = r * r * pi;
    v = s * h;
    printf("圆周长: %.2lf\n圆面积: %.2lf\n圆柱体积: %.2lf\n", c, s, v);
    return 0;
}