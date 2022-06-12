#include <stdio.h>
#include <stdlib.h> // qsort function

int compare(const void *a, const void *b){
    return (*(int*)a < *(int*)b);
}

int main(){
    int data[] = {32, 71, 12, 45, 26};
    // Start ptr., no_of_elements, size, func ptr.
    qsort(data,5,sizeof(int),compare);
    
    for(int i=0;i<5;i++){
        printf("%d ",data[i]);
    }
    return 0;
}