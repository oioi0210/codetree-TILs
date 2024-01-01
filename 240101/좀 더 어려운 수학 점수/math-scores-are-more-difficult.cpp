#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a;
    cin >>b;
      cin >>c;
        cin >>d;

   if (a>c ) {
		cout << "A" << endl;
	}
    else if (c>a) {
		cout << "B" << endl;
	}

	else if  (a==c && b>d ) {
		cout << "A" << endl;
	}
    else if  (a==c && d>b ) {
		cout << "B" << endl;
	}
  
    return 0;
}