#include <bits/stdc++.h>
using namespace std;

void solve_swap(string num, int i){
    char swap_pos = i;
    // Tìm ra số lớn nhất nhỏ hơn i-1 để swap, tính từ i đến cuối
    // Ta có ví dụ số 1297893789 -> 1297883799 chứ không phải 1297839789
    for(int j = i+1; j < num.size(); j++){
        if(num[j] > num[swap_pos] && num[j] < num[i-1]){
            swap_pos = j;
        }
    }
    swap(num[i-1], num[swap_pos]);
    cout << num << endl;
}

void solve(string num){
    // Tìm ra vị trí i đầu tiên mà num[i] < num[i-1], tính từ phải sang trái
    // Ví dụ 12435 -> 12345, 12345 -> -1, 99999 -> -1
    for(int i = num.size()-1; i >= 2; i--){
        if(num[i] < num[i-1]){
            solve_swap(num, i);
            return;
        }
    }
    // TH kí tự swap ở vị trí thứ 2 mà bằng 0 sẽ ko hợp lệ
    // Ví dụ số 102345 -> 012345, 10000 -> 01000 là sai
    int i = 1;
    if(num[i] < num[0] && num[i] != '0'){
        solve_swap(num, i);
        return;
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