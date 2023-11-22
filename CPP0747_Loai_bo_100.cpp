#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        // Thuật toán: Loại bỏ các xâu con 100, KHÔNG CẦN LIÊN TIẾP NHAU
        // Vì vậy chỉ cần đếm số 1, số 0, so sánh số số 1 với 1 NỬA số số 0 (100 gồm 1 số 1 và 2 số 0)
        // Cái nào bé hơn thì nhân 3 lên là ra kết quả
        string s;
        cin >> s;
        int count_0 = 0;
        int count_1 = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0') ++count_0;
            else ++count_1;
        }
        if(count_1 <= count_0 / 2){
            cout << count_1 * 3;
        } else {
            cout << count_0 / 2 * 3;
        }
    }
}