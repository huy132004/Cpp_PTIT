#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll a, ll b, ll c){
    ll result = 0;
    ll mod = b % c;
    for (ll i = 1; i <= a; i++){
       result += mod;
       if(result >= c) result -= c; 
    }
    cout << result << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        ll a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
}