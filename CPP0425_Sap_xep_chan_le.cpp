#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> b(n);
        int index = 0;
        for (int i = 0; i < n; i += 2) {
            b[i] = a[index];
            ++index;
        }
        for (int i = 1; i < n; i += 2) {
            b[i] = a[index];
            ++index;
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}