#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a % 2 != 0) {
		a=a+3;
	}
   

	if (a%3 ==0) {
		cout << a/3<< endl;
	}
   


	return 0;

}