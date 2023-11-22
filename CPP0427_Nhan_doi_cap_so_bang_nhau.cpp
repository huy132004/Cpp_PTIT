#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int N){
    int count_0 = 0;
    for(int i = 0; i < N; ++i){
        if(a[i] != 0){
            if(a[i] == a[i+1]){
                a[i] *= 2;
                a[i+1] = 0;
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(a[i] != 0) cout << a[i] << " ";
    }
    for(int i = 0; i < N; i++){
        if(a[i] == 0) cout << a[i] << " ";
    }
    cout << endl;
}

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
        solve(a, N);
    }
}