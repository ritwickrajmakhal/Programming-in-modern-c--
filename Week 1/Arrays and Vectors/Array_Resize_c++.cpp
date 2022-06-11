#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Enter no. of elements: ";
    int count, sum = 0;
    cin >> count;

    vector<int> arr; // Default size
    arr.resize(count); // Set resize
    for (int i = 0; i < count; i++){
        arr[i] = i;
        sum += arr[i];
    }
    cout << "Array Sum:" << sum << endl;

    return 0;
}