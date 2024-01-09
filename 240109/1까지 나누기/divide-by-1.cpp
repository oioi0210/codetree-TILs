#include <iostream>
using namespace std;

int main() {
    int n, i;

    cin >> n;
    
    for(i = 1; i < n + 1; i++){
        n = n / i;

        if(n <= 1){
            break;
        }
    }

    cout << i;
    return 0;
}