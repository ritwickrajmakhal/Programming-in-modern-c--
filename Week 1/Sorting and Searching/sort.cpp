#include <iostream>
#include <algorithm> // sort function
using namespace std;

int main(){
    int data[] = {32, 71, 12, 45, 26};
    // Start ptr., end ptr., func ptr.
    sort(data,data+5);
    
    for(int i=0;i<5;i++){
        cout << data[i] << " ";
    }

    return 0;
}