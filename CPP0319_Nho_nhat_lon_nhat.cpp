#include <bits/stdc++.h>
using namespace std;

string findMin(string num_begin, int m, int s){
    string num_min = num_begin;
    // Cộng đến 9 từ hàng bé lên hàng lớn
    for(int i = m-1; i >= 0; i--){
        while(num_min[i] != '9'){
            ++num_min[i];
            --s;
            if(s == 0) break;
        }
        if(s == 0) break;
    }
    return num_min;
}

string findMax(string num_begin, int m, int s){
    string num_max = num_begin;
    // Cộng đến 9 từ hàng lớn xuống hàng bé
    for(int i = 0; i < m; i++){
        while(num_max[i] != '9'){
            ++num_max[i];
            --s;
            if(s == 0) break;
        }
        if(s == 0) break;
    }
    return num_max;
}

void solve(int m, int s){
    // Xét th ko thỏa mãn là s <= 0 hoặc s > 9*m
    if(s <= 0 || s > m*9){
        cout << -1 << " " << -1;
        return;
    }
    // Đặt biến num_beginlà số nhỏ nhất có m chữ số
    // Ví dụ m = 3 thì num_begin = 1000
    string num_begin;
    num_begin += '1';
    for(int i = 0; i < m-1; i++){
        num_begin += '0';
    }
    // Do num_begin có chữ số 1 ở đầu, đằng sau là các chữ số 0
    // Nên ta trừ s đi 1
    --s;
    string num_min = findMin(num_begin, m, s);
    string num_max = findMax(num_begin, m, s);
    cout << num_min << " " << num_max;
}

int main(){
    int m, s;
    cin >> m >> s;
    solve(m, s);
}