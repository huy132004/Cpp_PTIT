#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char s[110];
        cin >> s;
        int len = strlen(s);
        for(int i = 0; i < len; i++){
            int count = 1;
            while(s[i] == s[i+1]){
                ++count;
                ++i;
            }
            cout << s[i] << count;
        }
        cout << endl;
    }
}