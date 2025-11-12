#include <stdio.h>

int main(void)
{
    double height, weight, bmi;
    printf("<height weight>:");
    scanf("%lf%lf", &height, &weight);
    bmi = weight / height / height;
    if (bmi < 18)
        printf("较轻\n");
    else if (bmi < 25)
        printf("正常\n");
    else if (bmi < 28)
        printf("超重\n");
    else
        printf("肥胖\n");
    return 0;
}