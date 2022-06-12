#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int data[] = {1,2,3,4,5};
    remove(data,data+5,1);
    for(int i=0;i<4;i++){
        cout << data[i] << " ";
    }
    return 0;
}