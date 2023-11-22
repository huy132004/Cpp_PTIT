#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        set<string> s1_words;
        stringstream ss1(s1);
        string m1;
        while(ss1 >> m1){
            s1_words.insert(m1);
        }

        set<string> s2_words;
        stringstream ss2(s2);
        string m2;
        while(ss2 >> m2){
            s2_words.insert(m2);
        }

        for(auto it1 = s1_words.begin(); it1 != s1_words.end(); it1++){
            if(s2_words.find(*it1) != s2_words.end()){
                continue;
            }
            std::cout << *it1 << " ";
        }
        std::cout << endl;
    }
}