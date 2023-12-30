#include <iostream>
using namespace std;

int main() {

	double a,b;
	cin >> a;
cin >>b;

	if (1 <= a  && 1 <= b ) {
		cout <<"High";
	}
	else if(0.5 <= a  && 0.5 <= b ) {
		cout << "Middle";
	}
    else {
        cout << "Low" ;
    }

	return 0;

}