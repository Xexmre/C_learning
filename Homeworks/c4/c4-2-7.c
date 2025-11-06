#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, s, area;
    /* type: 0=一般 1=等腰 2=等边 3=直角 4=等腰直角 */
    int type = 0;
    printf("输入三角形三边长: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("可以构成三角形\n");
    }
    else
    {
        printf("不能构成三角形\n");
        return -1;
    }
    /* 计算面积（海伦公式） */
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("面积: %.2lf\n", area);
    /* 判断类型 - 边长 */
    if (a == b)
    {
        if (a == c)
            type = 2;
        else
            type = 1;
    }
    else if (b == c)
        type = 1;
    else if (c == a)
        type = 1;
    /* 判断类型 - 角度 */
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
    {
        if (type == 1)
            type = 4;
        else
            type = 3;
    }
    switch (type)
    {
    case 0:
        printf("类型: 一般三角形\n");
        break;
    case 1:
        printf("类型: 等腰三角形\n");
        break;
    case 2:
        printf("类型: 等边三角形\n");
        break;
    case 3:
        printf("类型: 直角三角形\n");
        break;
    case 4:
        printf("类型: 等腰直角三角形\n");
        break;
    }
    return 0;
}