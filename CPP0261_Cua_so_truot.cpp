#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    vector<vector<int>> a(m, vector<int>(m));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cin >> n;
    vector<vector<int>> b(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            a[i][j] *= b[i%n][j%n];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
