#include <stdio.h>

int binsearch(int, int[], int);

int main(void)
{
    int x = 1, v[10], n = 10;

    for (int i = 0; i <= 10; i++)
    {
        v[i] = 2*i;
    }

    int result = binsearch(2, v, 10);
    printf("find= %d", result);
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, low_temp, high, high_temp, mid, mid_temp;
    low = 0;
    high = n - 1;
    printf("low= %d\thigh= %d\n", low, high);
    while (low <= high)
    {
        mid_temp = mid;
        mid = (low + high) / 2;
        printf("mid: %d → %d\n", mid_temp, mid);
        if (x < v[mid])
        {
            high_temp = high;
            high = mid - 1;
            printf("high: %d → %d\n", high_temp, high);
        }
        else if (x > v[mid])
        {
            low_temp = low;
            low = mid + 1;
            printf("low: %d → %d\n", low_temp, low);
        }
        else
            return mid;
    }
    return -1;
}