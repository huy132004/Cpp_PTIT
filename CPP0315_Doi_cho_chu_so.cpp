#include <bits/stdc++.h>
using namespace std;

void solve_swap(string num, int i){
    char swap_pos = i;
    for(int j = i+1; j < num.size(); j++){
        if(num[j] > num[swap_pos] && num[j] < num[i-1]){
            swap_pos = j;
        }
    }
    swap(num[i-1], num[swap_pos]);
    cout << num << endl;
}

void solve(string num){
    for(int i = num.size()-1; i >= 2; i--){
        if(num[i] < num[i-1]){
            solve_swap(num, i);
            return;
        }
    }
    // TH đặc biệt. Ví dụ số 102345 -> 012345 là sai
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