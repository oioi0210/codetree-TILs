#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
 int a,b;
 cin >> a >>b;
	int cnt=0;
   
	for(int i = a; i <= b; i++) {
		int sum =0;
	
		for (int s=1; s<=i; s++){
   
           if ((i%s)==0) {
             sum ++;
           }
    }
            if(sum == 3) {
           cnt ++;
           }
          
        
    
	}
    	cout << cnt << endl;
	
	return 0;
}