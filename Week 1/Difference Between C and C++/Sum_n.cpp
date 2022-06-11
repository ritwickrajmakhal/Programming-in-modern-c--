#include <iostream>

using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Input Limit:" << endl;
    cin >> n;
    
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout << "Sum of " << n << " numbers is " << sum << endl;
    
    return 0;
}