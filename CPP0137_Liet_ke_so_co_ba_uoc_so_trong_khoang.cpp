#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Số chỉ có 3 ước số là bình phương của số nguyên tố
ll MAX_SNT = pow(10, 6); // Giới hạn số nguyên tố
vector<bool> sangSNT(MAX_SNT + 1); // Mảng sàng số nguyên tố


void SangSNT(){
    sangSNT[0] = sangSNT[1] = false;
    for(ll i = 2; i <= MAX_SNT; i++){
        sangSNT[i] = true;
    }
    for(ll i = 2; i*i <= MAX_SNT; i++){
        if(sangSNT[i] == true){
            for(ll j = i*2; j <= MAX_SNT; j += i){
                sangSNT[j] = false;
            }
        }
    }
}
int main(){
    SangSNT();
    int T;
    cin >> T;
    while(T--){
        ll L, R;
        cin >> L >> R;
        int count = 0;
        for(ll i = sqrt(L); i <= sqrt(R); i++){
            if(sangSNT[i] == true) ++count;
        }
        cout << count << endl;
    }
}