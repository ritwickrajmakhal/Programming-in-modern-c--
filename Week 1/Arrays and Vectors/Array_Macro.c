#include <stdio.h>
#define MAX 100
int main(){
    int arr[MAX], sum = 0,i;
    int count;
    printf("Enter no. of elements: ");
    scanf("%d",&count);

    for(i=0;i<count;i++){
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array Sum: %d",sum);

    return 0;
}