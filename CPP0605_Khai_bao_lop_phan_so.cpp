#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo{
private:
    ll tuSo, mauSo;
public:
    PhanSo(ll m = 1, ll n = 1){
        tuSo = m;
        mauSo = n;
    }
    friend istream& operator >> (istream&, PhanSo&);
    friend ostream& operator << (ostream&, PhanSo);
    void rutgon(){
        ll GCD = __gcd(tuSo, mauSo);
        tuSo /= GCD; 
        mauSo /= GCD;
    }; 
};

istream& operator >> (istream& mycin, PhanSo& p){
    mycin >> p.tuSo >> p.mauSo;
    return mycin;
}

ostream& operator << (ostream& mycout, PhanSo p){
    mycout << p.tuSo << "/" << p.mauSo;
    return mycout;
}

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}