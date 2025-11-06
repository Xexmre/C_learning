#include <stdio.h>
double average_3(double, double, double);
int main(void)
{
    FILE *fp;
    fp = fopen("score_avg.txt", "w");
    int student_id;
    double score_maths, score_english, score_c, score_average;
    printf("输入学号、高数、英语、C语言成绩：");
    scanf("%d%lf%lf%lf", &student_id, &score_maths, &score_english, &score_c);
    score_average = average_3(score_maths, score_english, score_c);
    fprintf(fp, "学号\t高数\t英语\tC 语言\t平均分\n");
    fprintf(fp, "%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf", student_id,score_maths,score_english,score_c,score_average);
    fclose(fp);
    return 0;
}
double average_3(double a, double b, double c)
{
    double average = (a + b + c) / 3;
    return average;
}