#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        char str[100][100];
        int i = 0;
        char kitu;
        do{
            scanf("%s", str[i]);
            ++i;
            kitu = getchar();
        }while(kitu == ' ' || kitu == '\n' || kitu == '\t');
        cout << i << endl;
    }
}