#include <stdio.h>
int main(void)
{
    int a, b, t;
    printf("请输入变量 a、b 的值:");
    /**************found************/
    scanf("%d%d", &a, &b); // 此处填写通过 scanf()从键盘输入数据给变量 a、b 的语句;
    /**************found************/
    printf("交换前：a=%d, b=%d\n", a, b); // 此处填写输出交换前变量 a、b 的值的语句;
    t = a;
    a = b;
    b = t;
    /**************found************/
    printf("交换后：a=%d, b=%d\n", a, b); // 此处填写输出交换后变量 a、b 的值的语句;
    return 0;
}