#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream infile("VANBAN.in", ios::in);
    set<string> danhSachTu;
    string word;
    while(infile >> word){
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        danhSachTu.insert(word);
    }
    for(auto it = danhSachTu.begin(); it != danhSachTu.end(); it++){
        cout << *it << endl;
    }
    infile.close();
}