#include <bits/stdc++.h>
using namespace std;

/* 
Có 6 trường hợp dãy số thỏa mãn là dãy Moutain:

- Dãy chỉ tăng: 1 2 3 4 5 6
- Dãy chỉ giảm: 6 5 4 3 2 1
- Dãy bằng: 3 3 3 3 3 3
- Dãy chỉ tăng hoặc bằng: 1 1 2 3 3 4 4
- Dãy chỉ giảm hoặc bằng: 6 6 5 4 3 3 2
5 trường hợp này sử dụng hàm OnlyIncreaseOrDecrease để xét.

- Dãy chỉ có duy nhất 1 cực đại ví dụ: 1 2 3 3 2 2
Trường hợp này sử dụng biến TopPoint để đếm số đỉnh của dãy số
Nếu TopPoint bằng 1 => Dãy số chỉ có 1 cực đại => là dãy Mountain
*/
bool OnlyIncreaseOrDecrease(vector<int> a, int n, int l, int r)
{
    bool OnlyIncrease = true;
    bool OnlyDecrease = true;
    for (int i = l; i < r; i++)
    {
        if (a[i] < a[i + 1])
        {
            OnlyDecrease = false;
        }
        else
        {
            OnlyIncrease = false;
        }
    }
    if (OnlyIncrease == false && OnlyDecrease == false)
    {
        return false;
    }
    return true;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;

        bool checkMountain = false;
        if (OnlyIncreaseOrDecrease(a,n,l,r) == true)
        {
            checkMountain = true;
        }
        else
        {
            int TopPoint = 0;
            for(int i = l+1; i < r; i++){
                if(a[i] >= a[i-1] && a[i] >= a[i+1]){
                    ++TopPoint;
                }
            }
            if(TopPoint == 1) {
                checkMountain = true;
            }
        }
        if (checkMountain == true){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}