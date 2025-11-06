#include <stdio.h>
int main(void)
{
    int year, leap;
    printf("Please enter a year:");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 100 != 0)
        leap = 1;
    else if (year % 400 == 0)
        leap = 1;
    else
        leap = 0;
    /* 超纲写法：三目表达式 */
    printf(leap ? "%d is a leap year\n" : "%d is not a leap year\n", year);
    return 0;
}