#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x =0;
    while (true) {
        if ( n==1){
            break;
        }
        else {
            n=n/2;
            x++;
    }
    }
    cout << x;
    return 0;
}