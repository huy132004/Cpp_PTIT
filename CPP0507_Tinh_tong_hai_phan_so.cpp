#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long TuSo, MauSo;
};

void nhap(PhanSo &x){
    cin >> x.TuSo >> x.MauSo;
}

PhanSo tong(PhanSo p, PhanSo q){
    struct PhanSo t;

    long a = __gcd(p.MauSo, q.MauSo);
    t.MauSo = p.MauSo * q.MauSo / a;
    t.TuSo = p.TuSo * q.MauSo / a + q.TuSo * p.MauSo / a;

    long b = __gcd(t.TuSo, t.MauSo);
    t.TuSo /= b;
    t.MauSo /= b;

    return t;
}

void in(PhanSo t){
    cout << t.TuSo << "/" << t.MauSo;
}

int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}