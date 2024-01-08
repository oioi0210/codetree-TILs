#include <iostream>
using namespace std;

int main() {
   int n;
cin>>n;
int sum_val = 0;
  int a;
  

   for ( int i =0; i<n; i++){
cin >>a;

   sum_val +=a;
 
   }
 double mid;
   cout<<fixed;
   cout.precision(1);
   mid = (double) sum_val / n;
   
    cout << sum_val << " " << mid  ;

    return 0;
}