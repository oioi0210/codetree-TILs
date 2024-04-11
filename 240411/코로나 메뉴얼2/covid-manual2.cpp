#include <iostream>
using namespace std;

int main() {
    int a{0};
    int b{0};
    int c{0};
    int d{0};
    char x;
    int n;
    int cnt{0};
    int v{0};
    while (v<3) {
     
cin>>x>>n;
    
    if(x=='Y'&& n>=37) {
        cnt++;
        a++;
        v++;
    }
    else if (x=='N'&&n>=37){
        b++;
        v++;
    }
    else if (x=='Y'&&n<37) {
        c++;
        v++;
    }
    else {
        d++;
        v++;
    }
    if(v>=3) {
        break;
    }
    }
    
    cout << a << " " << b << " " << c << " " << d << " "; 
    if(cnt>=2) {
        cout << "E";
    }
    return 0;
}