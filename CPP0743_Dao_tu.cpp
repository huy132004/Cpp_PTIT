#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string m;
        vector<string> output;
        while(ss >> m){
            output.push_back(m);
        }
        reverse(output.begin(), output.end());
        for(string word : output){
            cout << word << " ";
        }
        cout << endl;
    }
}
