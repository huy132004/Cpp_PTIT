#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[10][10];
    int n = 0;
    char kitu;
    do{
        cin >> s[n];
        ++n;
        kitu = getchar();
    } while(kitu == ' ');
    //In ra phần tên
    --n;
    for(int i = 0; i < strlen(s[n]); i++){
        s[n][i] = tolower(s[n][i]);
    }
    cout << s[n];
    //In ra phần các chữ đầu của họ đệm
    ++n;
    for(int i = 0; i < n-1; i++){
        s[i][0] = tolower(s[i][0]);
        cout << s[i][0];
    }
    cout << "@ptit.edu.vn";
}