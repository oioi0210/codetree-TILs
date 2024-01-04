#include <iostream>
using namespace std;

int main() {

	int a,b;
	cin >> a;
	cin >> b;


cout << a/b <<".";

 a%=b;
	for (int i = 0; i < 20 ; i++) {
		 a= a*10;
		

		 cout << a/b;
		 a%=b;
	}

	return 0;

}