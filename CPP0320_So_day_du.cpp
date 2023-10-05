#include <bits/stdc++.h>
using namespace std;

int solve(string num){
    if(num[0] == '0') return -1;
    vector<int> check(10,0);
    for(char c : num){
        if(c < '0' || c > '9') return -1;
        c -= '0';
        check[c] = 1;
    }
    for(int i = 0; i < 9; i++){
        if(!check[i]) return 0;
    }
    return 1;
}

int main(){
    int T;
    cin >> T >> ws;
    while(T--){
        string num;
        cin >> num;
        switch(solve(num)){
            case -1:
                cout << "INVALID" << endl; break;
            case 0:
                cout << "NO" << endl; break;
            case 1:
                cout << "YES" << endl; break;
        }
    }
}