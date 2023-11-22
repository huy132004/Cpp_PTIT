#include <bits/stdc++.h>
using namespace std;

// Các test case: 
void solve_swap(string num, int i){
    int swap_pos = i;
    // Tìm ra số lớn nhất nhỏ hơn số vị trí i-1 để swap, tính từ vị trí i đến cuối
    // Ta có ví dụ số 1297893789 -> 1297883799 chứ không phải 1297839789
    for(int j = i+1; j < num.size(); j++){
        if(num[j] > num[swap_pos] && num[j] < num[i-1]){
            swap_pos = j;
        }
    }
    swap(num[i-1], num[swap_pos]);
    // Sau khi swap nếu chữ số đầu bằng 0 -> không hợp lệ
    if(num[0] != '0'){
        cout << num << endl;
    } else {
        cout << -1 << endl;
    }
}

void solve(string num){
    // Nếu chữ số đầu bằng 0 -> không hợp lệ
    if(num[0] == '0'){
        cout << -1 << endl;
        return;
    }
    // Nếu số num có 1 chữ số -> không hợp lệ
    if(num.length() == 1){
        cout << -1 << endl;
        return;
    }
    // Tìm ra vị trí i đầu tiên mà num[i] < num[i-1], tính từ phải sang trái
    // Ví dụ 12435 -> 12345, 12345 -> -1, 99999 -> -1
    for(int i = num.size()-1; i >= 1; i--){
        if(num[i] < num[i-1]){
            solve_swap(num, i);
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string num;
        cin >> ws >> num;
        solve(num);
    }
}