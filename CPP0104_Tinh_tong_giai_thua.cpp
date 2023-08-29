#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long sum = 0, sum_temp;
    for(int i = 1; i <= n; i++){
        sum_temp = 1;
        for(int j = 1; j <= i; j++){
            sum_temp *= j;
        }
        sum += sum_temp;
    }
    cout << sum;
}