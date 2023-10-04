#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        //Loại các phần tử trùng nhau ở hàng đầu
        int n2 = n;
        for(int i = 0; i < n2; i++){
            for(int j = i+1; j < n2; j++){
                if(a[0][i] == a[0][j]){
                    for(int k = j; k < n2; k++){
                        a[0][k] = a[0][k+1];
                    }
                    --n2;
                    --j;
                }
            }
        }
        vector<int> numOfRowsAppearance(n,1);
        //Duyệt các phần tử hàng đầu tiên
        for(int h = 0; h < n2; h++){
            //Duyệt các hàng thứ hai đến cuối
            for (int i = 1; i < n; i++)
            {
                //Duyệt các phần tử trong hàng
                for (int j = 0; j < n; j++)
                {
                    //Nếu tìm dc phần tử bằng phần tử  hàng đầu tiên đang xét
                    //Cộng thêm 1 vào biến số hàng xuất hiện phần tử đó
                    if(a[0][h] == a[i][j]){
                        ++numOfRowsAppearance[h];
                        break;
                    }
                }
                
            }
        
        }  
        int count = 0;
        for(int i = 0; i < n; i++){
            //Đếm số phần tử xuất hiện ở tất cả các hàng
            if(numOfRowsAppearance[i] == n){
                ++count;
            }
        }
        cout << count << endl;    
    }
}