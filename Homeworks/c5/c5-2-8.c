#include <stdio.h>
int main()
{
    int character = 0, space = 0, number = 0, other = 0;
    char ch;
    printf("输入字符串:\n");
    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            character++;
        else if (ch >= '0' && ch <= '9')
            number++;
        else if (ch == ' ' || ch == '\n' || ch == '\t')
            space++;
        else
            other++;
    }
    printf("字母: %d\n", character);
    printf("数字: %d\n", number);
    printf("空格: %d\n", space);
    printf("其他: %d\n", other);
    return 0;
}