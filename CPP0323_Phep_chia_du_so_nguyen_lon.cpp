#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(string num, ll m){
    ll num_temp = 0;
    for(int i = 0; i < num.size(); i++){
        num_temp = num_temp * 10 + num[i] - '0';
        num_temp %= m;
    }
    cout << num_temp << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string num;
        cin >> num;
        ll m;
        cin >> m;
        solve(num, m);
    }
}