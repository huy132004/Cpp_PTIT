#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int f1 = 1, f2 = 1,temp;
        n -= 2;
        while(n--){
            temp = f2;
            f2 += f1;
            f1 = temp;
        }
        cout << f2 << endl;
    }
}