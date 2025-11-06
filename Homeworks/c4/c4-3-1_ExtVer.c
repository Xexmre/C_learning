#include <stdio.h>
#define STYLE_INFO "\033[0;30m"
#define STYLE_ERROR "\033[0;31m"
#define STYLE_RESET "\033[0m"

double rule1(int);
double rule2(double);

int main(void)
{
    int n;
    double price, price_after_method1_step0, price_after_method1_step1, price_after_method1_step2, price_after_method2_step0, price_after_method2_step1, price_after_method2_step2;
    printf("[input]\t输入单价和数量: ");
    scanf("%lf%d", &price, &n);
    printf(STYLE_INFO "[info]\t单价: %.2lf  数量: %d\n" STYLE_RESET, price, n);
    /* 办法1：规则先1后2 */
    price_after_method1_step0 = price * n;
    printf(STYLE_INFO "[info]\ttotal: %.2lf x %d = %.2lf\n" STYLE_RESET, price, n, price_after_method1_step0);
    price_after_method1_step1 = price_after_method1_step0 * rule1(n);
    printf(STYLE_INFO "[info]\trule1: %.2lf x %.2lf = %.2lf\n" STYLE_RESET, price_after_method1_step0, rule1(n), price_after_method1_step1);
    price_after_method1_step2 = price_after_method1_step1 - rule2(price_after_method1_step1);
    printf(STYLE_INFO "[info]\trule2: %.2lf - %.2lf = %.2lf\n" STYLE_RESET, price_after_method1_step1, rule2(price_after_method1_step1), price_after_method1_step2);
    printf(STYLE_INFO "[info]\tor\n" STYLE_RESET);
    /* 办法2：规则先2后1 */
    price_after_method2_step0 = price * n;
    printf(STYLE_INFO "[info]\ttotal: %.2lf x %d = %.2lf\n" STYLE_RESET, price, n, price_after_method2_step0);
    price_after_method2_step1 = price_after_method2_step0 - rule2(price_after_method2_step0);
    printf(STYLE_INFO "[info]\trule2: %.2lf - %.2lf = %.2lf\n" STYLE_RESET, price_after_method2_step0, rule2(price_after_method2_step0), price_after_method2_step1);
    price_after_method2_step2 = price_after_method2_step1 * rule1(n);
    printf(STYLE_INFO "[info]\trule1: %.2lf x %.2lf = %.2lf\n" STYLE_RESET, price_after_method2_step1, rule1(n), price_after_method2_step2);
    /* 算法比较 */
    printf(STYLE_INFO "[info]\t%.2lf ", price_after_method1_step2);
    printf(price_after_method1_step2 > price_after_method2_step2 ? ">" : "<");
    printf(" %.2lf\n" STYLE_RESET, price_after_method2_step2);
    printf("[done]\t最终价格是");
    printf("%.2lf", price_after_method1_step2 > price_after_method2_step2 ? price_after_method2_step2 : price_after_method1_step2);
    return 0;
}

/* 规则1: 2件8.5折，≥3件7折 */
double rule1(int n)
{
    double off_perc = 1;
    if (n == 2)
    {
        off_perc = 0.85;
    }
    else if (n >= 3)
    {
        off_perc = 0.7;
    }
    return off_perc;
}

/* 规则2: 每满300减30 */
double rule2(double p)
{
    double off_num = 30 * (int)(p / 300);
    return off_num;
}