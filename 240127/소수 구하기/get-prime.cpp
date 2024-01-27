#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
 int b;
 cin >> b;
	int cnt=0;
   
	for(int i = 1; i <= b; i++) {
		  int sum =0;
	
		for (int s=1; s<=i; s++){
 
           if ((i%s)==0) {
             sum ++;
           }
        }
            if(sum == 2) {
          cout << i << " ";
           }
          
        
    
	}
    	
	
	return 0;
}