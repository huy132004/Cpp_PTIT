#include <bits/stdc++.h>
using namespace std;

bool thuanNghich(string num){
    int len = num.length();
    for(int i = 0; i < len/2; i++){
        if(num[i] != num[len-i-1]) return false;
    }
    return true;
}
bool cmp(pair<string, int> num1, pair<string, int> num2){
    if(num1.first.length() != num2.first.length()) return num1.first.length() > num2.first.length();
    else return num1.first > num2.first;
}

int main(){
    map<string, int> m;
    vector<pair<string, int>> v;
    string s;
    while(cin >> s){
        if(thuanNghich(s) && s.length() > 1) ++m[s];
    }
    for(auto it : m){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}