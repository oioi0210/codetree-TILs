#include <iostream>
using namespace std;

int main() {

	int n,a;
	int sum_val = 0;
 cin >>n;
	for (int i = 2; i <= n; i++) {
     
        cin >>a;
	if ( a%2==1 && a%3==0){
sum_val += a;
    }
			
		
	}
	cout << sum_val;
	return 0;

}