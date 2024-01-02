#include <iostream>
using namespace std;

int main() {
    char a,c,e;
    int b,d,f;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
cin >> f;


    if (a=='Y' && b >=37 ) {
        if((c=='Y' && d >= 37) ||  (e=='Y' && f >= 37)){
        cout << "E";
        }
        else {
            cout << "N";
        }
    
          
        }
        
     else if (c=='Y' && d >= 37) {
        if (e=='Y' && f >= 37){
            cout << "E";
        }
        }
         
        
        return 0;
        
    }