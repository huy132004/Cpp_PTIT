#include <bits/stdc++.h>

int isPrime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int T; std::cin >> T;
    while(T--){
        int n; std::cin >> n;
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(std::__gcd(i,n) == 1){
                ++count;
            }
        }
        std::cout << isPrime(count) << std::endl;
    }
}