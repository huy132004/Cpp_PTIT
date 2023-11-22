#include <bits/stdc++.h>
using namespace std;

void modify_word(string &word){
    word[0] = toupper(word[0]);
    for(int i = 1; i < word.length(); i++){
        word[i] = tolower(word[i]);
    }
}

void solve_mode1(vector<string> word){
    int n = word.size();
    string ten = word[n-1];
    cout << ten << " ";
    for(int i = 0; i < n-1; i++){
        cout << word[i] << " ";
    }
    cout << endl;
}

void solve_mode2(vector<string> word){
    for(int i = 1; i < word.size(); i++){
        cout << word[i] << " ";
    }
    string ho = word[0];
    cout << ho << endl;
}

void solve(string name, int mode){
    vector<string> word;
    stringstream ss_name(name);
    string m;
    while(ss_name >> m){
        modify_word(m);
        word.push_back(m);
    }
    if(mode == 1){
        solve_mode1(word);
    } else if(mode == 2){
        for(int i = 1; i < word.size(); i++){
            cout << word[i] << " ";
        }
        string ho = word[0];
        cout << ho << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int mode;
        cin >> mode >> ws;
        string name;
        getline(cin, name);
        solve(name, mode);
    }
}