#include <iostream>
using namespace std;

int main() {
   double a;
   cout << fixed;
   cin >> a;
   cout.precision(2);
   cout << a+1.5 ;
    return 0;
}