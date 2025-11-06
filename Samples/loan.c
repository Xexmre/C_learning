#include <stdio.h>
#include <math.h>

int main(void)
{
    int year = 0;
    double money = 0, sum = 0, rate = 0;
    FILE *fp;
    fp = fopen("test.txt", "r");
    fscanf(fp, "%lf%lf%d", &money, &rate, &year);
    sum = money * pow(1 + rate, year);
    printf("%.2lf * %.2lf ^ %d = %.2lf", money, rate, year, sum);
    fclose(fp);
    return 0;
}