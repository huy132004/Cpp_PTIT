#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T >> ws;
    while(T--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        string convert;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'a': case 'b': case 'c':
                    convert += '2'; break;
                case 'd': case 'e': case 'f':
                    convert += '3'; break;
                case 'g': case 'h': case 'i':
                    convert += '4'; break;
                case 'j': case 'k': case 'l':
                    convert += '5'; break;
                case 'm': case 'n': case 'o':
                    convert += '6'; break;
                case 'p': case 'q': case 'r': case 's':
                    convert += '7'; break;
                case 't': case 'u': case 'v':
                    convert += '8'; break;
                case 'w': case 'x': case 'y': case 'z':
                    convert += '9'; break;
            }
        }
        string convert_reverse;
        for(int i = convert.length() - 1; i >= 0; i--){
            convert_reverse += convert[i];
        }
        if(convert == convert_reverse){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}