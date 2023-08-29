#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[110];
    cin >> s;
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
    }
    bool isVowel[len];
    for(int i = 0; i < len; i++){
        isVowel[i] = false;
    }
    for(int i = 0; i < len; i++){
        switch (s[i])
        {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
            isVowel[i] = true;
            break;
        
        default:
            break;
        }
    }
    for(int i = 0; i < len; i++){
        if(isVowel[i] == false){
            cout << "." << s[i];
        }
    }
}