#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    char Ten[50];
    char NgaySinh[15];
    double d1, d2, d3;
};

void nhap (struct ThiSinh &A){
    cin.get(A.Ten,50);
    cin >> A.NgaySinh;
    cin >> A.d1 >> A.d2 >> A.d3;
}

void in (struct ThiSinh A){
    cout << A.Ten << " " << A.NgaySinh << " ";
    cout << fixed << setprecision(1) << A.d1 + A.d2 + A.d3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}