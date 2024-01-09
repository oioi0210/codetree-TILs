#include <iostream>
using namespace std;
int main() {
    int n;
    int sum =0;
    int cnt =0;
    double mid;
	while (true) {
		cin >> n;

		
		if (n >= 30) {
			
			break;
		}
		else {
			sum +=n;
            cnt++;
		}
		

	}
    cout<<fixed;
    cout.precision(2);
          mid =  (double) sum/cnt;

    cout<<fixed;
    cout.precision(2);
    cout << mid;
	
	return 0;

}