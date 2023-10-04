#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n,p;
    cin >> m >> n >> p;

    vector<vector<int>> a(m);
    for (auto &vec:a) {
        vec.resize(n);
        for (auto &x:vec) {
            std::cin >> x;
        }
    }

    vector<vector<int>> b(n);
    for (auto &vec:b) {
        vec.resize(p);
        for (auto &x:vec) {
            std::cin >> x;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            long long sum = 0;
            for(int k = 0; k < n; k++){
                sum += a[i][k] * b[k][j];
            }
            std::cout << sum << ' ';
        }
        std::cout.put(0xa);
    }
    std::cout.flush();

    return 0;
}