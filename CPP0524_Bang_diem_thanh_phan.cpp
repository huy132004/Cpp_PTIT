#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string maSV;
    string ten;
    string lop;
    float d1, d2, d3;
};

void nhap(SinhVien &ds){
    cin.ignore();
    cin >> ds.maSV;
    cin.ignore();
    getline(cin, ds.ten);
    cin >> ds.lop;
    cin >> ds.d1 >> ds.d2 >> ds.d3;
}

void sap_xep(SinhVien *ds, int n){
    for(int i = 0; i < n; i++){
        int vtmin = i;
        for(int j = i+1; j < n; j++){
            if(ds[j].maSV < ds[vtmin].maSV){
                vtmin = j;
            }
        }
        swap(ds[i], ds[vtmin]);
    }
}

void in_ds(SinhVien *ds, int n){
    for(int i = 0; i < n; i++){
        cout << i+1 << " ";
        cout << ds[i].maSV << " ";
        cout << ds[i].ten << " ";
        cout << ds[i].lop << " ";
        cout <<fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}