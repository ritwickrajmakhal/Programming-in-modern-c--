#include <stdio.h>
#include <math.h>

int main(){
    double x, sqrt_x;
    printf("Input number ");
    scanf("%lf",&x); 
    sqrt_x = sqrt(x);
    printf("The sq. Root of %lf is %lf\n",x,sqrt_x);

    return 0;
}