#include <bits/stdc++.h>
using namespace std;

void solve(string s, int num){
    int count;
    set<char> kitu;
    int doDaiChuoi;
    for(doDaiChuoi = num; doDaiChuoi <= s.size(); doDaiChuoi++){
        for(int i = 0; i < s.size()-doDaiChuoi+1; i++){
            kitu.clear();
            for(int j = i; j < i+doDaiChuoi; j++){
                kitu.insert(s[j]);
            }
            if(kitu.size() == num) ++count;
        }
    }
    cout << count << endl;
}

int main(){
    int T;
    cin >> T >> ws;
    while(T--){
        string s, num_str;
        cin >> s >> num_str;
        int num = stoi(num_str);
        solve(s, num);
    }
}