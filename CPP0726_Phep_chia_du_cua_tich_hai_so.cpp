#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll a, ll b, ll c){
    ll result = 0;
    for (ll i = 1; i <= a; i++){
       result += b;
       result %= c; 
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