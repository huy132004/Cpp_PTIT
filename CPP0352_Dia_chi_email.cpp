#include <bits/stdc++.h>
using namespace std;

void solve(char name[10][10], int n){
    string ten;
    vector<string> ds_ten;
    int i = n-1;
    int len = strlen(name[i]);
    for(int j = 0; j < len; j++){
        ten += (char) tolower(name[i][j]);
    }
    for(i = 0; i < n-1; i++){
        ten += (char) tolower(name[i][0]);
    }
    auto it = find(ds_ten.begin(), ds_ten.end(), ten);
    
    cout << "@ptit.edu.vn" << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        char name[10][10];
        int n = 0;
        char kitu;
        do{
            cin >> name[n];
            ++n;
            kitu = getchar();
        }while(kitu == ' ');
        solve(name, n);
    }
}