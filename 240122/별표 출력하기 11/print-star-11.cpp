#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

	for (int i = 1; i <= 2*n+1; i++) {
		 {
			if(i % 2 == 1) {
			for(int k = 1; k <= 2*n+1; k++)
				cout << "* ";
		}	
		 
	
		else {
			for(int k =1 ; k <= n+1 ; k++)
				cout << "*   ";
		}
		cout << endl;
		}
		
	}

	return 0;

}