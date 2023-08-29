#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        char s[100000];
        cin >> s;
        int count = 0;
        char *token = strtok(s," \t\n");
        while(token != NULL){
            ++count;
            token = strtok(NULL," \t\n");
        }
        cout << count << endl;
    }
}