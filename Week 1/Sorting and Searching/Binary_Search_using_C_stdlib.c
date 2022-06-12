#include <stdio.h>
#include <stdlib.h> // bsearch function

int compare(const void *a, const void *b){
    if(*(int*)a<*(int*)b) return -1;
    if(*(int*)a==*(int*)b) return 0;
    if(*(int*)a>*(int*)b) return 1;
}

int main(){
    int data[] = {1, 2, 3, 4, 5}, k = 5;
    
    if(bsearch(&k,data,5,sizeof(int),compare)){
        printf("found!");
    }
    else{
        printf("Not found!");
    }
    return 0;
}