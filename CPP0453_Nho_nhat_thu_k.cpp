#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> in(n);
        vector<int> out(n);
        for(int i = 0; i < n; i++){
            cin >> in[i];
            out[i] = in[i];
        }
        sort(out.begin(), out.end());
        cout << out[k-1] << endl;
    }
}
