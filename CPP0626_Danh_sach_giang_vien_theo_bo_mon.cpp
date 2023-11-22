#include <bits/stdc++.h>
using namespace std;

int dem = 0;

class GiangVien{
public:
    int stt;
    string hoTen, mon, monVietTat;
    GiangVien(){
        stt = 0;
        hoTen = mon = monVietTat = "";
    }
    friend istream& operator >> (istream&, GiangVien&);
    friend ostream& operator << (ostream&, GiangVien);
};

istream& operator >> (istream& mycin, GiangVien& gv){
    ++dem;
    gv.stt = dem;
    getline(mycin, gv.hoTen);
    getline(mycin, gv.mon);
    stringstream ss(gv.mon);
    string word;
    while(ss >> word){
        gv.monVietTat += toupper(word[0]);
    }
    return mycin;
}

bool TenChuaTuKhoaHayKhong(GiangVien gv, string tuKhoa){
    for(int i = 0; i < gv.hoTen.length(); i++){
        gv.hoTen[i] = tolower(gv.hoTen[i]);
    }
    int pos = gv.hoTen.find(tuKhoa);
    if(0 <= pos && pos < gv.hoTen.length()) return true;
    return false; 
}

ostream& operator << (ostream& mycout, GiangVien gv){
    mycout << "GV" << setfill('0') << setw(2) << gv.stt << " ";
    mycout << gv.hoTen << " " << gv.monVietTat << endl;
    return mycout;
}

int main(){
    int N;
    cin >> N >> ws;
    GiangVien gv[N];
    for(int i = 0; i < N; i++){
        cin >> gv[i];
    }
    int T;
    cin >> T >> ws;
    while(T--){
        string tuKhoa;
        getline(cin, tuKhoa);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":" << endl;
        for(int i = 0; i < tuKhoa.length(); i++){
            tuKhoa[i] = tolower(tuKhoa[i]);
        }
        for(int i = 0; i < N; i++){
            if(TenChuaTuKhoaHayKhong(gv[i], tuKhoa)){
                cout << gv[i];
            }
        }
    }
}