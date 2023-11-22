#include <bits/stdc++.h>
using namespace std;

string thuong(string word){
    for (int i = 0; i < word.length(); i++){
        word[i] = tolower(word[i]);
    }
    return word;
}

int main(){
    string s;
    while(cin >> s){
        stringstream ss(s);
        string word;
        bool xuongDong = true;
        while(ss >> word){
            word = thuong(word);
            if(xuongDong == true){
                word[0] = toupper(word[0]);
                xuongDong = false;
            }
            int len = word.length() - 1;
            if(word[len] == '.' || word[len] == '!' || word[len] == '?'){
                word.pop_back();
                xuongDong = true;
            }
            cout << word;
            if(xuongDong == true) cout << endl;
            else cout << " ";
        }
    }
}