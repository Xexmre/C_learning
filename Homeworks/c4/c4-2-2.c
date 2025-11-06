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
    if (leap == 0)
    printf("%d is not a leap year\n", year);
    else printf("%d is a leap year\n", year);
    return 0;
}