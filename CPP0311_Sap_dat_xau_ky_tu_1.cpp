#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    bool checked[s.size()];
    for(int i = 0; i < s.size(); i++){
        checked[i] = false;
    }
    for(int i = 0; i < s.size(); i++){
        if(checked[i] == false){
            checked[i] = true;
            int count = 0;
            for(int j = i+1; j < s.size(); j++){
                if(s[j] == s[i]){
                   ++count;
                    checked[j] = true;
                }
            }
            if(s.size() % 2 == 0){
                if(count > s.size() / 2) return 0;
            } else {
                if(count > s.size() / 2 + 1) return 0;
            }
        }
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> ws >> s;
        cout << solve(s) << endl;
    }
}