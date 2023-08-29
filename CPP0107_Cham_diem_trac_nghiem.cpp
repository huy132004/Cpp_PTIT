#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char ans[15];
        for(int i = 0; i < 15; i++){
            cin >> ans[i];
        }
       
        const char *right_ans;
        if (n == 101)
        {
            right_ans = "ABBADCCABDCCABD";
        }
        else if(n == 102)
        {
            right_ans = "ACCABCDDBBCDDBB";
        }
        
        float score = 10.00;
        static const float score_per_ans = 10.00 / 15;
        for(int i = 0; i < 15; i++){
            if(ans[i] != right_ans[i]){
                score -= score_per_ans;
            }
        }
        cout << fixed << setprecision(2) << score << endl;
    }
}