#include <stdio.h>
int main()
{
    FILE *in, *out;
    int n;
    float m, e, c, avg;
    in = fopen("score.txt", "r");
    out = fopen("score_avg.txt", "w");
    fprintf(out, "学号\t数学\t英语\tC语言\t平均分\n");
    while (fscanf(in, "%d%f%f%f", &n, &m, &e, &c) == 4)
    {
        avg = (m + e + c) / 3.0;
        fprintf(out, "%-4d\t%-4.0f\t%-4.0f\t%-4.0f\t%-4.2f\n",
                n, m, e, c, avg);
    }
    fclose(in);
    fclose(out);
    return 0;
}