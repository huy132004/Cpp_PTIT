#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<string> num(n);
        set<string> out;
        for(string s : num){
            cin >> s;
            out.insert(s);
        }
        for(auto it = out.end(); it != out.begin(); it--){
            cout << *it;
        }
        cout << endl;
    }
}