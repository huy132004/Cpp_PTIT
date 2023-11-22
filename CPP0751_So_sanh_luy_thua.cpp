#include <bits/stdc++.h>
using namespace std;

int solve(int x, int y){
    if (y == 1 && x > 1) return 1;
    if(x == y) return 0;
    if((x == 2))
    if (x + y <= 6){
        if(x <= y) return 0;
        else return 1;
    }
    if (x + y > 6){
        if(x < y) return 1;
        else return 0;
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int m, n;
        cin >> m >> n;
        vector<int> x(m);
        vector<int> y(n);
        for(int i = 0; i < m; i++){
            cin >> x[i];
        }
        for(int j = 0; j < n; j++){
            cin >> y[j];
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            if(x[i] == 1) continue;
            for(int j = 0; j < n; j++){
                if(solve(x[i], y[j])) ++count;
            }
        }  
        cout << count << endl;  
    }
}