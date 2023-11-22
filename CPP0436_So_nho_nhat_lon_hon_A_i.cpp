#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> arr_in(n);
        for(int i = 0; i < n; i++){
            cin >> arr_in[i];
        }
        set<int> arr_sorted;
        for(int i = 0; i < n; i++){
            arr_sorted.insert(arr_in[i]);
        }
        vector<int> arr_out(n);
        for(int i = 0; i < n; i++){
            auto it = arr_sorted.find(arr_in[i]);
            ++it;
            if(it != arr_sorted.end()){
                arr_out[i] = *it;
            } else {
                arr_out[i] = -1;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr_out[i] == -1){
                cout << '_' << " ";
            } else {
                cout << arr_out[i] << " ";
            }
        }
        cout << endl;
    }
}