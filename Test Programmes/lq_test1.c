#include <stdio.h>

int len(char[]);
int min(int, int);

int main(void)
{
    char status_1[1000], status_2[1000];
    int differ = 0;
    printf("第一状态: ");
    scanf("%s", status_1);
    printf("第二状态: ");
    scanf("%s", status_2);
    for (int i = 0; status_1[i] != '\0' && status_2[i] != '\0'; ++i)
    {
        differ *= 10;
        if (status_1[i] != status_2[i])
        {
            differ += 1;
        }
    }
    printf("对比结果: %*d\n", min(status_1, status_2), differ);
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