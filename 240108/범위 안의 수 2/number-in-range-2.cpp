#include <iostream>
using namespace std;

int main() {

	int n;
	int sum_val = 0;
    int  cnt = 0;
   


	for (int i = 1; i <= 10; i++) {
     cin >>n;
      if ( n>=0 && n <=200) {
sum_val += n;
cnt++;
    }
    

    }
    	

   double mid;
   cout<<fixed;
   cout.precision(1);
   mid = (double) sum_val / cnt;
   
    cout << sum_val << " " << mid  ;

    return 0;
	}