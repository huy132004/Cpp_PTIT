#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int count_2, count_3, count_5, count_7;

void tachgiaithua(int i){
    for(int j = 2; j <= i; j++){
        switch(j){
            case 0: case 1: break;
            case 2: ++count_2; break;
            case 3: ++count_3; break;
            case 4: count_2 += 2; break;
            case 5: ++count_5; break;
            case 6: ++count_2; ++count_3; break;
            case 7: ++count_7; break;
            case 8: count_2 += 3; break;
            case 9: count_3 += 2;  break;
        }
    }
}

void solve(ll n){
    count_2 = 0, count_3 = 0, count_5 = 0, count_7 = 0;
    while(n){
        int i = n % 10;
        tachgiaithua(i);
        n /= 10;
    }
    
    string num;
    for(int i = 0; i < count_2; i++){
        num += '2';
    }
    // Đè all số 3 lên trên 2
    for(int i = 0; i < count_3; i++){
        num[i] = '3';
    }
    // Đè all số 5 lên trên 3
    for(int i = 0; i < count_5; i++){
        num[i] = '5';
        // Chèn 4 tức 2 số 2 vào 5, xóa bớt 2 số 2
        num.erase(num.find('2'),1);
        num.erase(num.find('2'),1);
    }
    // Đè all số 7 lên trên 5
    for(int i = 0; i < count_7; i++){
        num[i] = '7';
        // Chèn 6 tức giai thừa của 3 vào 7, xóa bớt 1 số 3
        num.erase(num.find('3'),1);
    }
    cout << num << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int a;
        ll n;
        cin >> a >> n;
        solve(n);
    }
}