#include <iostream>
#include <algorithm> // binary_search function
using namespace std;


int main(){
    int data[] = {1, 2, 3, 4, 5}, k = 5;

    if(binary_search(data,data+5,k)){
        printf("found!");
    }
    else{
        printf("Not found!");
    }

    return 0;
}