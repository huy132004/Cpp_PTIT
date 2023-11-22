#include <bits/stdc++.h>
using namespace std;

set<string> my_set;

int main()
{
    int n;
    cin >> n >> ws;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        getline(cin, s[i]);
        my_set.insert(s[i]);
    }
    cout << my_set.size();
}