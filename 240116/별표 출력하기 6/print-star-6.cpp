#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int s =1; s<=i-1; s++){
			cout << "  ";
		}
		for (int j = 0; j <= 2*(n - i); j++) {
			cout << "*"<< " ";
		}
		
		cout << endl;
	}


	for (int i = 1; i <= n-1; i++) {
			for (int j = 1; j <=n-i-1 ; j++) {
			cout << "  ";
		}
		for (int s =1; s<= 2*i+1; s++){
			cout << "*"<<" ";
		}
		
		
		cout << endl;
	}

	return 0;

}