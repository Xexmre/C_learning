#include <stdio.h>

double newton_method(double a, double b, double c, double y, int iterations) {
    double x = y;  // 初始猜测值
    for (int i = 0; i < iterations; ++i) {
        // 计算 f(x) 和 f'(x)
        double fx = a * x * x + b * x + c;
        double fx_prime = 2 * a * x + b;

        // 使用牛顿法迭代公式
        x = x - fx / fx_prime;

        // 输出每次迭代的结果（可选）
        printf("Iteration %d: x = %lf\n", i + 1, x);
    }
    return x;
}

int main() {
    double a, b, c, y;
    int iterations = 20;  // 迭代次数

    // 输入a, b, c和预期y
    printf("Enter coefficients a, b, c (for ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Enter initial guess y: ");
    scanf("%lf", &y);

    // 调用牛顿法计算根
    double result = newton_method(a, b, c, y, iterations);

    // 输出最终的根
    printf("Root after %d iterations: %lf\n", iterations, result);

    return 0;
}
