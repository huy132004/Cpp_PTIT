#include <bits/stdc++.h>
using namespace std;

struct ThoiGian{
    int gio, phut, giay;
} tgian[5001];

bool so_sanh(int j, int vtmin){
    if(tgian[j].gio != tgian[vtmin].gio) return tgian[j].gio < tgian[vtmin].gio;
    if(tgian[j].phut != tgian[vtmin].phut) return tgian[j].phut < tgian[vtmin].phut;
    return tgian[j].giay < tgian[vtmin].giay;
}

void sap_xep(ThoiGian *tgian, int N){
    for(int i = 0; i < N; i++){
        int vtmin = i;
        for(int j = i+1; j < N; j++){
            if(so_sanh(j, vtmin)){
                vtmin = j;
            }
        }
        swap(tgian[i], tgian[vtmin]);
    }
}

void in(ThoiGian *tgian, int N){
    for(int i = 0; i < N; i++){
        cout << tgian[i].gio << " ";
        cout << tgian[i].phut << " ";
        cout << tgian[i].giay << endl;
    }
}

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tgian[i].gio;
        cin >> tgian[i].phut;
        cin >> tgian[i].giay;
    }
    sap_xep(tgian, N);
    in(tgian, N);
}