#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if ((a<=7 && a%2 != 0) || (a>=8 && a%2 ==0))
    cout << 31;
    else if (a == 2)
    cout << 28;
    else 
    cout <<30;
   
    return 0;
}