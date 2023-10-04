#include <bits/stdc++.h>
using namespace std;

int deQuy(string num){
    int tongcs = 0;
    for(char x : num){
        tongcs += x - '0';
    }
    if(tongcs == 9) return 1;
    else if(tongcs < 9) return 0;
    else{
         return deQuy(to_string(tongcs));
    }
}    

int main(){
    int T;
    cin >> T >> ws;
    while(T--){
        string num;
        cin >> num;
        cout << deQuy(num) << endl;
    }
}