#include<bits/stdc++.h>
using namespace std;



int main(){
    int T; 
    cin >> T;
    while(T--){
        int m,n;
        cin >> m >> n;
        vector<int> a(m);
        vector<int> b(n);
        set<int> Union;
        set<int> Intersection;
        int union_size_before;
        int union_size_after;
        for(int i = 0; i < m; i++){
            cin >> a[i];
            Union.insert(a[i]);
        }
        for(int j = 0; j < n; j++){
            cin >> b[j];
            union_size_before = Union.size();
            Union.insert(b[j]);
            union_size_after = Union.size();
            if(union_size_before == union_size_after){
                Intersection.insert(b[j]);
            }
        }
        for(auto it = Union.begin(); it != Union.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
        for(auto it = Intersection.begin(); it != Intersection.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}