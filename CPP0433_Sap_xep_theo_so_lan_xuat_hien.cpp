#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b){
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> a(N);
        map<int, int> myMap; // <phần tử, số lượng>
        for(int i = 0; i < N; i++){
            cin >> a[i];
        }
        for(int i = 0; i < N; i++){
            ++myMap[a[i]];
        }
        // Phải chuyển map vào 1 vector mới mới sắp xếp tùy ý được
        vector<pair<int, int>> vectorMap(myMap.begin(), myMap.end());
        sort(vectorMap.begin(), vectorMap.end(), cmp);
        for(auto it = vectorMap.begin(); it != vectorMap.end(); it++){
            for(int i = 0; i < it->second; i++){
                cout << it->first << " ";
            }
        }
        cout << endl;
    }
}