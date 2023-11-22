#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> a(N);
        for(int i = 0; i < N; i++){
            cin >> a[i];
        }
        int k, x;
        cin >> k >> x;
        int x_pos;
        for(int i = 0 ; i < N; i++){
            if(a[i] == x){
                x_pos = i;
                break;
            }
        }
        for(int i = x_pos - k/2; i <= x_pos + k/2; i++){
            if(i != x_pos) cout << a[i] << " ";
        }
        cout << endl;
    }
}