#include <iostream>
using namespace std;

int main() {
 int n;
cin >>n;
	for (int i =1; i < n+1; i++) {
        for (int s = 0; s <= n-i; s++) {
			cout << "*";
        }
		for (int j = 1; j <= 2*i-2; j++) {
			cout << " ";
		}
	    for (int s = 0; s <= n-i; s++) {
			cout << "*";
        }
	
		cout << endl;
	}

	return 0;

}