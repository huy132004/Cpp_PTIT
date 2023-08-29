#include <bits/stdc++.h>
using namespace std;

bool comparator(int a, int b) {
    return a < b;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int m,n;
        cin >> m >> n;
        int a[m*n];
        for(int i = 0; i < m*n; i++){
            cin >> a[i];
        }
        sort(a, a + m*n, comparator);
        for(int i = 0; i < m*n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}