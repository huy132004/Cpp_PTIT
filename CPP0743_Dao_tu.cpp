#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char str[1000][100];
        int n = 0;
        char kitu;
        do{
            cin >> str[n];
            ++n;
            kitu = getchar();
        } while (kitu == ' ');
        for(int i = n-1; i >= 0; i--){
            cout << str[i] << " ";
        }
        cout << endl;
    }
}