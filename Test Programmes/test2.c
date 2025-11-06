#include <stdio.h>
int main(void)
{
    int nchi = 0, nmat = 0, neng = 0, nsum = 0;
    float favg = 0;
    scanf("%d%d%d", &nchi, &nmat, &neng);
    nsum = (nchi + nmat + neng);
    favg = (float)(nsum) / 3; /* 注意: 需要将算式中的变量转化为浮点数，才能进行浮点计算，此时3也会自动转化为浮点数。当然，写 favg = nsum / 3.0; 效果相同 */
    printf("sum=%d\navg=%f", nsum, favg);
    return 0;
}