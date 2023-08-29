#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a,m;
        cin >> a >> m;
        int x = 0;
        while(a * x < m || (a*x) % m != 1){
            ++x;
        }
        cout << x << endl;
    }
}