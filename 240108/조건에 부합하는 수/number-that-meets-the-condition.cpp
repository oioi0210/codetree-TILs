#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i =1; i <=n; i++){
        if (i%2==0&& i%4 !=0)
        continue;
        if((i/8)%2==0) 
        continue;
        if ((i%7) <4) 
        continue;
       cout << i <<" ";
    }
     
    
    
    return 0;
}