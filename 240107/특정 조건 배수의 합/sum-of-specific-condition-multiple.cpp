#include <iostream>
using namespace std;

int main() {

	int a,b;
	int sum_val = 0;
    int  cnt = 0;
   
 cin >> a>> b;

	for (int i = a; i <= b; i++) {
     
      if ( i%5==0) {
sum_val += i;
cnt++;
    }
    

    }

   
   
    cout << sum_val ;

    return 0;
	}