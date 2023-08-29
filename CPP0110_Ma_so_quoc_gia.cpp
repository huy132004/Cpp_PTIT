#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char s[20];
        cin >> s;
        int len = strlen(s);
        for(int i = 0; i < len; i++){
            if(s[i] =='0' && s[i+1] == '8' && s[i+2] == '4'){
                for(int j = i; j < len; j++){
                    s[j] = s[j+3];
                }
                len -= 3;
                break;
            }
        }
        cout << s << endl;
    }
}