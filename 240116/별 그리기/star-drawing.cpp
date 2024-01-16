#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

	for (int i = 0; i < n; i++) {
		for (int s =1; s<=n-i-1; s++){
			cout << " ";
		}
		for (int j = 1; j <= 2*i+1; j++) {
			cout << "*";
		}
		
		cout << endl;
	}
	for (int i =0; i <n; i++) {
		for (int s=1; s <=i + 1; s++ ) {
			cout << " ";
		}
		for (int j =1; j <=(2 * n) - (2 * i) - 3; j++) {
			cout << "*";
			
		}
		cout << endl;
	}


	  

	return 0;

}