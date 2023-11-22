#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> dayFibo(10001);
ll mod = pow(10, 9) + 7;

void TaoDayFibonacci(){
    dayFibo[0] = 0;
    dayFibo[1] = 1;
    for(int i = 2; i <= 10000; i++){
        dayFibo[i] = (dayFibo[i-1] + dayFibo[i-2]) % mod;
    }
}

int main(){
    TaoDayFibonacci();
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cout << dayFibo[n] << endl;
    }
}