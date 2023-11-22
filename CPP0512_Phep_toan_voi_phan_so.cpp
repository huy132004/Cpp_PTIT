#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo{
public:
    ll tu, mau;
    PhanSo(){
        tu = mau = 0;
    }
};

void process(PhanSo A, PhanSo B){
    // Tìm C = (A+B)^2
    PhanSo C;
    C.tu = A.tu*A.tu*B.mau*B.mau + A.mau*A.mau*B.tu*B.tu + 2*A.tu*A.mau*B.tu*B.mau;
    C.mau = A.mau*A.mau*B.mau*B.mau;
    ll GCD = __gcd(C.tu, C.mau);
    C.tu /= GCD;
    C.mau /= GCD;
    cout << C.tu << "/" << C.mau << " ";
    // Tìm D = A*B*C
    PhanSo D;
    D.tu = A.tu*B.tu*C.tu;
    D.mau = A.mau*B.mau*C.mau;
    GCD = __gcd(D.tu, D.mau);
    D.tu /= GCD;
    D.mau /= GCD;
    cout << D.tu << "/" << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}