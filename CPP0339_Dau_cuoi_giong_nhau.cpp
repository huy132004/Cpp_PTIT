#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char s[1000];
        cin >> s;
        int len = strlen(s);
        int result = 0;
        for(int i = 0; i < len; i++){
            for(int j = i; j < len; j++){
                if(s[i] == s[j]){
                    ++result;
                }
            }
        }
        cout << result << endl;
    }
}