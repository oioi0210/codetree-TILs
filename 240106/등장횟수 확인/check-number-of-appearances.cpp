#include <iostream>
using namespace std;
int main() {
    int n;

    int cnt;
cnt =0;
 for (int j = 1; j < 6; j++) {
        cin >>n;
    if ( n >1 && n%2==0 ){
cnt++;
    }
 }


cout << cnt;




    return 0;
}