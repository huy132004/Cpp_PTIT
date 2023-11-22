#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo{
private:
    ll tu, mau;
public:
    PhanSo(ll x, ll y){
        tu = x;
        mau = y;
    }
    friend istream& operator >> (istream&, PhanSo&);
    friend PhanSo operator + (PhanSo, PhanSo);
    friend ostream& operator << (ostream&, PhanSo);
};

istream& operator >> (istream& mycin, PhanSo& ps){
    mycin >> ps.tu >> ps.mau;
    return mycin;
}

PhanSo operator + (PhanSo p, PhanSo q){
    PhanSo tong(1,1);
    tong.tu = p.tu * q.mau + q.tu * p.mau;
    tong.mau = p.mau * q.mau;
    ll GCD = __gcd(tong.tu, tong.mau);
    tong.tu /= GCD;
    tong.mau /= GCD;
    return tong;
}

ostream& operator << (ostream& mycout, PhanSo tong){
    mycout << tong.tu << "/" << tong.mau;
    return mycout;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}