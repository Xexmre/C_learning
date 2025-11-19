#include <stdio.h>

int len(char[]);
int min(int, int);

int main(void)
{
    char status_1[1000],status_2[1000];
    printf("第一状态: ");
    scanf("%s", status_1);
    printf("第二状态: ");
    scanf("%s", status_2);
    return 0;
}

int len(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}