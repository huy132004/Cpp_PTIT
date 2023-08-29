#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(){
    char str[50][50];
    char s[50];
    int n = 0;
    char kitu;
    do{
        scanf("%s", str[n]);
        ++n;
        kitu = getchar();
    }while(kitu == ' ');
    cin >> s;
    bool print[50];
    for(int i = 0; i < n; i++){
        print[i] = true;
    }
    for(int i = 0; i < n; i++){
        if(strcmp(str[i], s) == 0){
            print[i] = false;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(print[i] == true){
            cout << str[i] << " ";
        }
    }
    cout << endl;
}