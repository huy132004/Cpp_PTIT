#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream infile("DATA.in", ios::in);
    int N1, N2;
    infile >> N1 >> N2;
    int num;
    set<int> set1;
    for(int i = 0; i < N1; i++){
        infile >> num;
        set1.insert(num);
    }
    set<int> set2;
    for(int i = 0; i < N2; i++){
        infile >> num;
        set2.insert(num);
    }
    for(auto it = set1.begin(); it != set1.end(); it++){
        if(set2.find(*it) != set2.end()){
            cout << *it << " ";
        }
    }
    infile.close();
}