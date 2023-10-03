#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i,j;
        for(i = 0; i < n/2; i++){
            cout << a[n-1-i] << " " << a[i] << " ";
        }
        if(n % 2) cout << a[n/2];
        cout << endl;
    }
}