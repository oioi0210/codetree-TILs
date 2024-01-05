#include <iostream>
using namespace std;

int main() {

	
	int a = 0;
    int b =0;

	for (int i = 1; i < 11; i++) {
        int n;
        cin >> n;
		if (n % 3 == 0 &&  n%5 ==0)  {
			a++;
            b++;
		}
        else if ( n%5 ==0){
            b++;
        }
         else if ( n%3 ==0){
            a++;
        }
     
	}

	cout << a << " " << b ;
	return 0;

}