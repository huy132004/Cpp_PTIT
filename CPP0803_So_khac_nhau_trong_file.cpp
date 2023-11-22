#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> danhSach;
    fstream infile("DATA.in", ios::in);
    int num;
    while(infile >> num){
        ++danhSach[num];
    }
    for(auto it = danhSach.begin(); it != danhSach.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    infile.close();
}