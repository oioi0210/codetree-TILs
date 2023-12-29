#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a % 2 == 0) {
		a=a/2;
	}

	if (a %2==1) {
		cout << (a+1) /2<< endl;
	}
    else {cout << a ;}



	return 0;

}