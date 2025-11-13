#include <stdio.h>

int main(void)
{
    char ch[10];
    for (int i = 0; i < 10; ++i)
    {
        ch[i] = 0;
    }
    ch[0] = '0';
    ch[1] = '1';
    ch[2] = '2';
    for (int i = 0; i < 10; ++i)
    {
        printf(ch[i] == '\0' ? "ch[%d]= \\0\n" : "ch[%d]= %c\n", i, ch[i]);
    }
    return 0;
}
