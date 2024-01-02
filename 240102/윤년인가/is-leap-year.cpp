#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;
	if (a%4 ==0) {
if ((a % 100 == 0) && (a % 400 == 0) || (a % 100 != 0)) {
	cout << "true" << endl;
}
else {
	cout << "false" << endl;
}
	}
	else {
		cout << "false" ;
	}
	return 0;

}