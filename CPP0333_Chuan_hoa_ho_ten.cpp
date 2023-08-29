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
    int i;
    //In ra phần họ đệm trừ tên đệm cạnh tên
    for(i = 0; i < n-2; i++){
        s[i][0] = toupper(s[i][0]);
        for(int j = 1; j < strlen(s[i]); j++){
            s[i][j] = tolower(s[i][j]);
        }
        cout << s[i] << " ";
    }
    //In ra tên đệm cạnh tên
    s[i][0] = toupper(s[i][0]);
    for(int j = 1; j < strlen(s[i]); j++){
        s[i][j] = tolower(s[i][j]);
    }
    cout << s[i] << ", ";
    //In ra tên
    ++i;
    for(int j = 0; j < strlen(s[i]); j++){
        s[i][j] = toupper(s[i][j]);
    }
    cout << s[i];
}