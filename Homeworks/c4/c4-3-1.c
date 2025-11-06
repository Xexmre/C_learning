#include <stdio.h>

int main(void)
{
    int n;
    double price, price_after_method1_step0, price_after_method1_step1, price_after_method1_step2, price_after_method2_step0, price_after_method2_step1, price_after_method2_step2;
    printf("输入单价和数量: ");
    scanf("%lf%d", &price, &n);

    /* 办法1：规则先1后2 */
    price_after_method1_step0 = price * n;
    price_after_method1_step1 = price_after_method1_step0;
    if (n == 2)
    {
        price_after_method1_step1 *= 0.85;
    }
    else if (n >= 3)
    {
        price_after_method1_step1 *= 0.7;
    }
    price_after_method1_step2 = price_after_method1_step1 - 30 * (int)(price_after_method1_step1 / 300);

    /* 办法2：规则先2后1 */
    price_after_method2_step0 = price * n;
    price_after_method2_step1 = price_after_method2_step0 - 30 * (int)(price_after_method2_step0 / 300);
    price_after_method2_step2 = price_after_method2_step1;
    if (n == 2)
    {
        price_after_method2_step2 *= 0.85;
    }
    else if (n >= 3)
    {
        price_after_method2_step2 *= 0.7;
    }

    /* 算法比较 */
    printf("最终价格是");
    if (price_after_method1_step2 > price_after_method2_step2)
    {
        printf("%.2lf", price_after_method2_step2);
    }
    else
    {
        printf("%.2lf", price_after_method1_step2);
    }
    return 0;
}
