#include<bits/stdc++.h>
using namespace std;

void solve(int n, int x, vector<int> a){
    multimap<int, int> out;
    for(int i = 0; i < a.size(); i++){
        pair<int, int> pair{abs(x-a[i]), a[i]};
        out.insert(pair);
    }
    for(auto &it : out){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        solve(n, x, a);
    }
}