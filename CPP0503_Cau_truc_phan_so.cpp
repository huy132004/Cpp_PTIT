#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

struct PhanSo
{
    ull TuSo, MauSo;
};

void nhap(PhanSo &p){
    cin >> p.TuSo >> p.MauSo;
}

void rutgon(PhanSo &p){
    ull UCLN = __gcd(p.TuSo, p.MauSo);
    p.TuSo /= UCLN;
    p.MauSo /= UCLN;
}

void in(PhanSo p){
    cout << p.TuSo << "/" << p.MauSo;
}

int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}