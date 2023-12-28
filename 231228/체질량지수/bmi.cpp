#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a;
    cin >>b;
    cout << (10000*b) / (a*a) << endl;
    if  ((10000*b) / (a*a)>=25) {cout << "Obesity";}
}