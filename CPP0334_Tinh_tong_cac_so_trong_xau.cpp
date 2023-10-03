#include<bits/stdc++.h> 
using namespace std; 
int main(){
    int T;
    cin >> T >> ws;
    while(T--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(!isdigit(s[i])) s[i] = ' ';
        }
        stringstream ss(s);
        string m;
        long long sum = 0;
        while(ss >> m){
            sum += stoll(m);
        }
        cout << sum << endl;
    }
}