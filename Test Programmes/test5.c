#include <stdio.h>
#define UPPER 500
#define LOWER 100
#define LINEMAX
int main(void)
{
    int i = 0, line_num = 1;
    while (i <= UPPER)
    {
        if (i >= LOWER)
            printf("%d", i);
        i += 3 * 7;
        if (line_num<=4){
            ++line_num;
            printf(" ");
        } else {
            line_num = 1;
            printf("\n");
        }
    }
    return 0;
}