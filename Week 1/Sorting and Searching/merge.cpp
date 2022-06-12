#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int data1[] = {1,2,2,4,5};
    int data2[] = {6,6,8,9,11};
    int data[10];
    merge(data1,data1+5,data2,data2+5,data);
    for(int i=0;i<10;i++){
        cout << data[i] << " ";
    }
    return 0;
}