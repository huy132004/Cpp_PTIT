#include<bits/stdc++.h>
using namespace std;

void sangEratosthene(long limit, vector<int> &sang){
    sang[0] = sang[1] = 0;
    for(int i = 2; i < limit; i++){
        sang[i] = 1;
    }
    for(int i = 2; i*i <= limit; i++){
        if(sang[i]){
            for(int j = i*i; j < limit; j += i){
                sang[j] = 0;
            }
        }
    }
}

bool isOnlyIncrease(long num) {
    string num_str = to_string(num);
    for (int i = 0; i < num_str.length() - 1; i++) {
        if (num_str[i] >= num_str[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isOnlyDecrease(long num) {
    string num_str = to_string(num);
    for (int i = 0; i < num_str.length() - 1; i++) {
        if (num_str[i] <= num_str[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long count = 0;
        long limit = pow(10, n);
        vector<int> sang(limit+1);
        sangEratosthene(limit, sang);
        for (long num = limit/10; num < limit; num++) {
            if (sang[num] == 1) {
                if (isOnlyIncrease(num) == true || isOnlyDecrease(num) == true) {
                    ++count;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}