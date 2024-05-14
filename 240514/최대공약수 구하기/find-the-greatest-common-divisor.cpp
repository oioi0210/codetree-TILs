#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >>m;
    int gong{1};
    if (n<=m) {
   for (int i=1; i <= n; i++) {
   if( n%i==0 && m%i==0 ) {
gong=i;
   }
   }
    }
        if (n>m) {
   for (int i=1; i <= m; i++) {
   if( n%i==0 && m%i==0 ) {
gong=i;
   }
   }
    }
    cout << gong;
}