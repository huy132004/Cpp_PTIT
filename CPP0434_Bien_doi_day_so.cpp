#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> in){
    vector<int> out(n);
    out[0] = in[0] * in[1];
    out[n-1] = in[n-1] * in[n-2];
    for(int i = 1; i < n-1; i++){
        out[i] = in[i-1] * in[i+1];
    }
    for(int i = 0; i < n; i++){
        cout << out[i] << " ";
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> in(n);
        for(int i = 0; i < n; i++){
            cin >> in[i];
        }
        solve(n, in);
    }
}