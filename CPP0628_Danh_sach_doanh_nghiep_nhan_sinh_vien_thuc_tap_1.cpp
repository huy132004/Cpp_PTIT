#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep{
public:
    string maDN, tenDN;
    int soSV;
    DoanhNghiep(){
        maDN = tenDN = "";
        soSV = 0;
    }
    friend istream& operator >> (istream&, DoanhNghiep&);
    friend ostream& operator << (ostream&, DoanhNghiep);
};

istream& operator >> (istream& mycin, DoanhNghiep& dn){
    mycin >> dn.maDN;
    cin.ignore();
    getline(mycin, dn.tenDN);
    mycin >> dn.soSV;
    return mycin;
}

ostream& operator << (ostream& mycout, DoanhNghiep dn){
    mycout << dn.maDN << " ";
    mycout << dn.tenDN << " ";
    mycout << dn.soSV << endl;
    return mycout;
}

bool cmp(DoanhNghiep d1, DoanhNghiep d2){
    if(d1.soSV != d2.soSV) return d1.soSV > d2.soSV;
    else return d1.maDN < d2.maDN;
}

int main(){
    int N;
    cin >> N;
    DoanhNghiep dn[N];
    for(int i = 0; i < N; i++){
        cin >> dn[i];
    }
    sort(dn, dn + N, cmp);
    for(int i = 0; i < N; i++){
        cout << dn[i];
    }
}