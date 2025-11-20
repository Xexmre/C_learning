#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float in;         // 输入的总金额
    int m_sum;        // 修正有效总金额，单位为分
    int n;            // 输入的份数
    int w_sum = 0;    // 总权重
    int test_sum = 0; // 测试总金额
    int diff;         // 金额修正值
    FILE *out;

    srand((unsigned)time(NULL));
    out = fopen("red_packet.txt", "w");

    // -------------- 输入部分 --------------
    printf("请输入总金额和份数（以空格分隔）：");
    scanf("%f %d", &in, &n);
    m_sum = (int)(in * 100); // 修正有效总金额
    printf("总金额 = %.2f\n", (float)(m_sum) / 100);

    // -------------- 计算部分 --------------
    int w[n], m[n]; // 权重数组，金额数组
    // 生成随机权重并计算总权重
    for (int i = 0; i < n; i++)
    {
        w[i] = rand();
        w_sum += w[i];
    }
    // 计算每个部分的金额
    for (int i = 0; i < n; i++)
    {
        m[i] = w[i] * m_sum / w_sum;
        test_sum += m[i];
    }
    diff = m_sum - test_sum; // 计算金额修正值
    for (int i = 0; i < diff; i++)
    {
        m[rand() % (n - 1)]++; // 将修正值分配到前diff个部分
        test_sum++;
    }
    // -------------- 输出部分 --------------
    for (int i = 0; i < n; i++)
        fprintf(out, "第 %d 份金额 = %.2f\n", i + 1, (float)(m[i]) / 100);
    printf("test_sum = %d\nreal_sum = %d\n", test_sum, m_sum); // 测试总金额是否相等
    printf(test_sum == m_sum ? "金额分配正确！\n" : "金额分配错误！\n");
    return 0;
}