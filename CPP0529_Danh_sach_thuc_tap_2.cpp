#include <bits/stdc++.h>
using namespace std;

int so = 0;

struct SinhVien{
    int stt;
    string maSV;
    string ten;
    string lop;
    string email;
    string doanh_nghiep;
} ds[100];

void sap_xep(SinhVien *ds, int N){
    for(int i = 0; i < N; i++){
        int vtmin = i;
        for(int j = i+1; j < N; j++){
            if(ds[j].maSV < ds[vtmin].maSV){
                vtmin = j;
            }
        }
        swap(ds[i], ds[vtmin]);
    }
}

void in(SinhVien *ds, int N, vector<string> dnghiep, int T){
    for(int m = 0; m < T; m++){
        for(int i = 0; i < N; i++){
            if(ds[i].doanh_nghiep == dnghiep[m]){
                cout << ds[i].stt << " ";
                cout << ds[i].maSV << " ";
                cout << ds[i].ten << " ";
                cout << ds[i].lop << " ";
                cout << ds[i].email << " ";
                cout << ds[i].doanh_nghiep << endl;
            }
        }
    }
    
}

int main(){
    int N;
    cin >> N >> ws;
    for(int  i = 0; i < N; i++){
        ds[i].stt = i + 1;
        getline(cin, ds[i].maSV);
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].email);
        getline(cin, ds[i].doanh_nghiep);
    }
    int T;
    cin >> T;
    vector<string> dnghiep(T);
    for(int i = 0; i < T; i++){
        cin >> dnghiep[i];
    }
    sap_xep(ds, N);
    in(ds, N, dnghiep, T);
}