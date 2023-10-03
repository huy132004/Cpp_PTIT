#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s){
    if(s.size() == n){
        if(s[0] > '0'){
            cout << s << " ";
        }
        return;
    }
    solve(n, s+'0'); solve(n, s+'1'); 
    solve(n, s+'2'); solve(n, s+'3'); 
    solve(n, s+'4'); solve(n, s+'5');
    solve(n, s+'6'); solve(n, s+'7');
    solve(n, s+'8'); solve(n, s+'9');
}

int main(){
    int n;
    cin >> n;
    solve(n, "");
    cout << endl;
}