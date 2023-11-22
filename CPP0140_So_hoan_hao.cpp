#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        ll n_temp = n;
        map<int, int> uocSoNguyenTo; // ước nguyên tố, số lượng
        for(ll i = 2; i*i <= n; i++){
            while(n_temp % i == 0){
                ++uocSoNguyenTo[i];
                n_temp /= i;
            }
        }
        if(n_temp > 1) ++uocSoNguyenTo[n_temp];
        ll tongUocSo = 1;
        for(auto it = uocSoNguyenTo.begin(); it != uocSoNguyenTo.end(); it++){
            ll sum = 0;
            for(int i = 0; i <= it->second; i++){
                sum += pow(it->first, i);
            }
            tongUocSo *= sum;
        }
        cout << (n*2 == tongUocSo) << endl;
    }
}

