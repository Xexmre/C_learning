#include <stdio.h>
int main(void)
{
    double c = 0, f = 0;
    printf("输入华氏度: ");
    scanf("%lf", &f);
    c = ((double)5 / 9) * (f - 32);
    printf("%.2lf℉ --> %.2lf℃", f, c);
    return 0;
}
