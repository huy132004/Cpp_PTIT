#include<bits/stdc++.h>
using namespace std;

map<string, int> demSoEmail;

void chuyenTenThanhEmail(string ten){
    string email;
    stringstream ss(ten);   
    string word;
    while(ss >> word){
        email += tolower(word[0]);
    }
    email.pop_back();
    for(int i = 0; i < word.length(); i++){
        word[i] = tolower(word[i]);
    }
    email = word + email;
    ++demSoEmail[email];
    if(demSoEmail[email] > 1){
        cout << email << demSoEmail[email] << "@ptit.edu.vn" << endl;
    } else {
        cout << email << "@ptit.edu.vn" << endl;
    }
}

int main(){
    int N;
    cin >> N >> ws;
    string ten;
    for(int i = 0; i < N; i++){
        getline(cin, ten);
        chuyenTenThanhEmail(ten);
    }
}