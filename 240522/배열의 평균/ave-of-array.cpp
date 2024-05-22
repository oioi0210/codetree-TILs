#include <iostream>
using namespace std;

int main() {

	int arr_2d[2][4];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr_2d[i][j];
		}
	}
double sum {0};
cout <<fixed;
cout.precision(1);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			sum+= arr_2d[i][j];
		}
		cout<< sum/4 << " ";
        sum =0;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			sum+= arr_2d[j][i];
		}
		cout<< sum/2 << " ";
        sum =0;
	}
	cout << endl;

for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			sum+= arr_2d[j][i];
		}
		
	}
	cout<< sum/8<< " ";

	cout << endl;


	return 0;

}