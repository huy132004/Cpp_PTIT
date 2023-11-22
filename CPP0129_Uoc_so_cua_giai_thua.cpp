#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, p, x = 0;
        cin >> N >> p;
        for(int num = p; num <= N; num += p){
            int i = num;
            do{
                ++x;
                i /= p;
            } while(i % p == 0);
        }
        cout << x << endl;
    }
}