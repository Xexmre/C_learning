#include <stdio.h>
int main(void){
    double r, area, circu;
    printf("Input r:");
    scanf("%lf", &r); /* long float = double */
    area = 3.1415926535897*r*r;
    circu = 2*3.1415926535897*r;
    printf("r=%lf,area=%lf,circu=%lf", r, area, circu);
    return 0;
}