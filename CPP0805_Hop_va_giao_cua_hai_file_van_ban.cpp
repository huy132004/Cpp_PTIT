#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> tapTu1;
    set<string> tapTu2;
    set<string> hopHaiTapTu;
    string word;
    
    fstream data1("DATA1.in", ios::in);
    while(data1 >> word){
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        tapTu1.insert(word); 
        hopHaiTapTu.insert(word);
    }
    data1.close();

    fstream data2("DATA2.in", ios::in);
    while(data2 >> word){
        for(int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
        tapTu2.insert(word);
        hopHaiTapTu.insert(word);
    }
    data2.close();

    for(auto it = hopHaiTapTu.begin(); it != hopHaiTapTu.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = tapTu1.begin(); it != tapTu1.end(); it++){
        if(tapTu2.count(*it) != 0){
            cout << *it << " ";
        }
    }
    cout << endl;
}