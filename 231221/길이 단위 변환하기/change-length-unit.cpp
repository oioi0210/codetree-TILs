#include <iostream>
using namespace std;

int main() {
    double a = 9.2;
    double b = 1.3;
 cout << fixed;
    double c = a * 30.48;
    double d = b * 160934;
  cout.precision(1);
    cout << a << "ft" << " = " << c << "cm" << endl;
     cout << b << "mi" << " = " << d << "cm" << endl;
    return 0;
}