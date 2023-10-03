#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    multiset <char> kitu;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum += s[i] - '0';
        } else {
            kitu.insert(s[i]);
        }
    }
    for(auto it = kitu.begin(); it != kitu.end(); it++){
        cout << *it;
    }
    cout << sum << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        solve(s);
    }
}