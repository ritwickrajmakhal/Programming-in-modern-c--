#include <stdio.h>


int main(){
    int data[] = {32, 71, 12, 45, 26};
    int i, step, n = 5, temp;
    for(step=0;step<n-1;step++){
        for(i=0;i<n-step-1;i++){
            if(data[i] > data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",data[i]);
    }
    return 0;
}