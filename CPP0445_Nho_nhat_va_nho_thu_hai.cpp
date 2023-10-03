#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int numOfEles;
        cin >> numOfEles;
        vector<int> ele(numOfEles);
        for (int i = 0; i < numOfEles; i++)
        {
            cin >> ele[i];
        }
        int minFirst = ele[0], minFirstPosition = 0;
        for(int i = 1; i < numOfEles; i++){
            if(ele[i] < minFirst){
                minFirst = ele[i];
                minFirstPosition = i;
            }
        }
        for(int i = minFirstPosition; i < numOfEles; i++){
            ele[i] = ele[i+1];
        }
        --numOfEles;
        int minSecond = ele[0], minSecondPosition = 0;
        for(int i = 1; i < numOfEles; i++){
            if(ele[i] < minSecond){
                minSecond = ele[i];
                minSecondPosition = i;
            }
        }
        if(minSecond == minFirst){
            cout << -1 << endl;
        }else{
            cout << minFirst << " " << minSecond << endl;
        }
    }
}