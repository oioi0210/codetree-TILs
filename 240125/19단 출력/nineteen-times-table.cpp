#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			
				cout <<  i << " * " << j << " = " << i*j ;
			
			if(j<19 && j%2==1) {
				cout << " / ";
			}
			else if (j%2==0){
				cout << endl;
			}
			else  {
				cout << endl;
			}
		}
	}

	return 0;

}