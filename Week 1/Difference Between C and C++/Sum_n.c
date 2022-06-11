#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int i;
    int sum = 0;
    printf("Input Limit:");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum += i;
    }
    printf("Sum of %d numbers is %d",n,sum);
    
    return 0;
}