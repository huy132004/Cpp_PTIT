#include <bits/stdc++.h>
using namespace std;
/*Truy cập link sau để xem lý giải thuật toán:
https://daynhauhoc.com/t/107611 */
int main() {
    int T;
    cin >> T;
    while(T--) {
        char binary[1000];
        cin >> binary;
        int len = strlen(binary);
        int r = 0;
        for(int i = 0; i < len; i++) {
            r = 2 * r + binary[i] - '0';
            r = r % 5;
        }
        if(r == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}