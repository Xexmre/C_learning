#include <stdio.h>
int main(void){
    int x, y ,sum;
    printf("Input x and y:\n");
    scanf("x=%d,y=%d",&x,&y);
    sum = x + y;
    printf("x+y=%d",sum);
    return 0;
}