#include <bits/stdc++.h>
using namespace std;

int main(){
    string ten;
    getline(cin, ten);
    string email;
    stringstream ss(ten);
    string m;
    while(ss >> m){
        email += tolower(m[0]);
    }
    email.pop_back();
    for(int i = 0; i < m.size(); i++){
        m[i] = tolower(m[i]);
    }
    email = m + email + "@stu.ptit.edu.vn";
    cout << email << endl;
}