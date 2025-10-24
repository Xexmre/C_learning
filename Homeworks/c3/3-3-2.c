#include <stdio.h>
double average_3(double, double, double);
int main(void)
{
    FILE *fp_r, *fp_w;
    fp_r = fopen("score.txt", "r");
    fp_w = fopen("score_avg.txt", "w");
    int student_id;
    double score_maths, score_english, score_c, score_average;
    fscanf(fp_r, "%d\t%lf\t%lf\t%lf", &student_id, &score_maths, &score_english, &score_c);
    score_average = average_3(score_maths, score_english, score_c);
    fprintf(fp_w, "学号\t高数\t英语\tC 语言\t平均分\n");
    fprintf(fp_w, "%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf", student_id, score_maths, score_english, score_c, score_average);
    fclose(fp_r);
    fclose(fp_w);
    printf("填写完成");
    return 0;
}
double average_3(double a, double b, double c)
{
    double average = (a + b + c) / 3;
    return average;
}