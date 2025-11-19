// spinner_min.c
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#define msleep(ms) Sleep(ms)
#else
#include <unistd.h>
#define msleep(ms) usleep((ms) * 1000)
#endif

int main(void)
{
    const char frames[] = "|/-\\";
    for (int i = 0; i < 100; ++i)
    { // 演示转 100 次
        printf("\r%c loading...", frames[i % 4]);
        fflush(stdout);
        msleep(80); // 每帧 80ms
    }
    printf("\rfinished!          \n");
    return 0;
}
