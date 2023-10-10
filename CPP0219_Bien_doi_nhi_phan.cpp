#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int m,n;
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        vector<vector<int>> b(m, vector<int>(n, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1){
                    int k = i;
                    for(int l = 0; l < n; l++){
                        b[k][l] = 1;
                    }
                    int l = j;
                    for(k = 0; k < m; k++){
                        b[k][l] = 1;
                    }
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}