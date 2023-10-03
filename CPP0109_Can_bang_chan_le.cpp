#include <iostream>
#include <math.h>
using namespace std;

bool canBangChanLe(long i){
    int chan = 0, le = 0;
    int chuso;
    while (i > 0){
        chuso = i % 10;
        chuso % 2 == 0 ? ++chan : ++le;
        i /= 10;
    }
    if (chan == le){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (long i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (canBangChanLe(i) == true)
        {
            cout << i;
            ++count;
        }
        if (count == 10)
        {
            cout << endl;
            count = 0;
        }
        else
        {
            cout << " ";
        }
    }
}