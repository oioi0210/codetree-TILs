#include <iostream>
using namespace std;

int main() {
int n , m ;
cin >> n >> m;
	int arr_2d[n][m];
	
    int a =1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr_2d[i][j]= a;
            cout << arr_2d[i][j] << " ";
            a++;
		}
		cout << endl;
	}

	return 0;

}