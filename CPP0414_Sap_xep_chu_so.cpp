#include<bits/stdc++.h>

int main()
{
    int T;
    std::cin >> T;
    while(T--){
        int n;
        std::cin >> n;
        std::vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        std::set<int> mySet;
        int num;
        for (long long i = 0; i < n; i++) {
            while(a[i] > 0){
                num = a[i] % 10;
                mySet.insert(num);
                a[i] /= 10;
            }
        }
        for (int i : mySet) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}