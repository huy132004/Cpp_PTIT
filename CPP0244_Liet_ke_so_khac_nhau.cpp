#include <iostream>
using namespace std;

int a[100], n;

void nhapMang1Chieu(){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void loaiBoTrungNhau()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                --n;
                --j;
            }
        }
    }
}

void sapXepTang()
{
    for(int i = 0; i < n; i++){
        int vtmin = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[vtmin]){
                vtmin = j;
            }
        }
        int temp = a[i];
        a[i] = a[vtmin];
        a[vtmin] = temp;
    }
}

void xuatMang1Chieu(){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    nhapMang1Chieu();
    loaiBoTrungNhau();
    sapXepTang();
    xuatMang1Chieu();
}