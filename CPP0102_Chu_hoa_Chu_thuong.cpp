#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        char c;
        cin >> c;
        if (c >= 'A' && c <= 'Z'){
            c += 32;
        }
        else if (c >= 'a' && c <= 'z'){
            c -= 32;
        }
        cout << c << endl;
    }
}