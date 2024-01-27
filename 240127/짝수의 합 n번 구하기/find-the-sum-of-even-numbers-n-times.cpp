#include <iostream>

using namespace std;

int main() {
   int n;
   cin >> n;

 int a,b;

	int cnt=0;
   
	for(int i = 1; i <= n; i++) {
		int sum =0;
	 cin >> a >>b;
		for (int s=a; s<=b; s++){
   
           if ((s%2)==0) {
             sum +=s;
           }
    }
        
       cout << sum << endl;  
        
    
	}
    
	
	return 0;
}