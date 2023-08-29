#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long n;
    cin >> n;
    double sum = 0;
    while(n > 0){
        sum += 1.0 / n;
        --n;
    }
    cout << fixed << setprecision(4) << sum << endl;
}