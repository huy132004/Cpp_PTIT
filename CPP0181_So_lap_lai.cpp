#include <bits/stdc++.h>
using ll = long long;

void Main(){
    int T;
    std::cin >> T;
    while(T--){
        ll a, x, y;
        std::cin >> a >> x >> y;
        for(ll i = 0; i < std::__gcd(x,y); i++){
            std::cout << a;
        }
        std::cout << std::endl;
    }
}

int main(){
    Main();
}