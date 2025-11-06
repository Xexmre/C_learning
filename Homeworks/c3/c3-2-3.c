#include <stdio.h>
int main(void)
{
    /**************found************/
    int a = 7; // 此处填写对变量 a 的定义和赋值语句
    /**************found************/
    // 此处填写对变量 x，y，z 的定义和赋值语句
    float x = 2.5, y = 4.7, z;
    z = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("z=%f\n", z);
    return 0;
}
