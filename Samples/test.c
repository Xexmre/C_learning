#include <stdio.h>

void num_cnt(void)
{
    for (int index = 0; index <= 10; ++index)
    {
        printf("%d\n", index);
    }
}

int main(void)
{

    /*
    int index = 0;
    while (index <= 10)
    {
        printf("%d\n", index);
        index = index + 1;
    }
    return 0;
    */
    num_cnt();
}
