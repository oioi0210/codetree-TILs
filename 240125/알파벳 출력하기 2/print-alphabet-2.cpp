#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
    char x='A';
for (int i =1; i<=n; i++) {
    for (int s=1; s<i; s++  )
   cout << "  ";
for (int j =1; j<=n-i+1; j++ ){
    cout << (char) x << " " ;
    x++;
    if (x =='[') {
        
        x='A';
    }
}
cout << endl;
}



	return 0;
}