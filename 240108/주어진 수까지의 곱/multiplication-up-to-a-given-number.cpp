#include <iostream>
using namespace std;

int main() {

	int a = 3, b = 6;
	int prod = 1;

	for (int i = a; i <= b; i++) {
		
			prod *= i;
		}
	

	cout << prod;
	return 0;

}