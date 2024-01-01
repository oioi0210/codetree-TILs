#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
   if (a>=3 && a<=5 ) {
		cout << "Spring" << endl;
	}
	else if (a <= 8 && a>=6) {
		cout << "Summer" << endl;
	}
    else if (a <=11 && a>=9) {
		cout << "Fall" << endl;
	}
	else {
		cout << "Winter" << endl;
	}
    return 0;
}