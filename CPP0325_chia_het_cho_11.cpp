#include <bits/stdc++.h>

using namespace std;

int modul(std::string s, const int mod) {
    s.reserve();
    int n = 0, x = 1;
    unsigned result = 0;
    while(n < s.length()){
        result += (((s[n] - '0') * x) % mod);
        result %= mod;
        x = (x * 10) % mod;
        ++n;
    }
    return result;
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        std::string num;
        getline(cin >> ws, num);
        std::cout << (modul(num,11) == 0) << endl;
    }
    
}