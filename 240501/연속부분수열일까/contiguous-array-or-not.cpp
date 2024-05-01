#include <iostream>
#include <string>
using namespace std;

int main() { // 여기에 코드를 작성해주세요.
    int n1, n2;
    string str1, str2;
    cin >> n1 >> n2;
    cin >> str1;
    cin >> str2;

    int lastindex = str1.size() -1;
    int lastindexx = str2.size() - 1;
    int cnt{ 0 };
    
        for (int j = 0; j <= lastindex; j++) {
            if (str2[0] == str1[j]) {
                for (int s = 0; s <= lastindexx; s++)
                {
                    
                    if (str1[j] == str2[s]) {
                        cnt++;
                    }
                    else break;
                }
            }
        }
        if (cnt == n2) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    

    return 0;
}