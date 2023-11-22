#include <bits/stdc++.h>
using namespace std;

string operator*(string X, int n){
    string result;
    int soDu = 0;
    for(int i = X.size() - 1; i >= 0; i--){
        long long temp = (X[i] - '0') * n + soDu;
        soDu = temp / 10;
        result += (temp % 10 + '0');
    }
    if(soDu > 0) result = to_string(soDu) + result;
    return result;
}
void CATALAN(int n){
    string result = "1";
    // Rút gọn phân số (2n)! / (n! * (n+1)!)
    int tu_so[n+1];
    for(int i = 2; i <= n; i++){
        tu_so[i] = n+i;
    }
    for(int i = 2; i <= n; i++){
        int x = i;
        while(x > 1){
            for(int j = 1; j <= n; j++){
                int GCD = __gcd(tu_so[j], x);
                tu_so[j] /= GCD;
                x /= GCD;
                if(x == 1) break;
            }
        }
        
    }
    for(int i = 1; i <= n; i++){
        result = result * tu_so[i];
    }
    cout << result << endl;
}

int main(){
    int n;
    cin >> n;
    ++n;
    CATALAN(n);
}