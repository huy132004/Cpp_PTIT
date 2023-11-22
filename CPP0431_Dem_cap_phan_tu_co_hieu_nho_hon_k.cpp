#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int* a = new int[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int count = 0;
        for(int i = 0; i < n; i++){
            int pos = upper_bound(a+i+1, a+n, a[i]+k) - a;
            count += pos - i - 1;
            for(int j = pos-1; j > i; j--){
                if(a[j] - a[i] == k) --count;
                else break;
            }
        }
        cout << count << endl;
        delete[] a;
    }
}