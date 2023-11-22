#include <bits/stdc++.h>
using namespace std;

int dem = 0;

class GiangVien{
public:
    int stt;
    string hoTen, ten, mon;
    GiangVien(){
        stt = 0;
        hoTen = ten = mon = "";
    }
    friend istream& operator >> (istream&, GiangVien&);
    friend ostream& operator << (ostream&, GiangVien);
};

istream& operator >> (istream& mycin, GiangVien& gv){
    ++dem;
    gv.stt = dem;
    getline(mycin, gv.hoTen);
    getline(mycin, gv.mon);
    int pos = gv.hoTen.find_last_of(" ");
    gv.ten = gv.hoTen.substr(pos + 1, 100);
    return mycin;
}

bool cmp(GiangVien a, GiangVien b){
    if(a.ten != b.ten) return a.ten < b.ten;
    else return a.stt < b.stt;
}

ostream& operator << (ostream& mycout, GiangVien gv){
    mycout << "GV" << setfill('0') << setw(2) << gv.stt << " ";
    mycout << gv.hoTen << " ";
    stringstream mon(gv.mon);
    string word;
    string monVietTat;
    while(mon >> word){
        monVietTat += toupper(word[0]);
    }
    mycout << monVietTat << endl;
    return mycout;
}

int main(){
    int N;
    cin >> N >> ws;
    GiangVien gv[N];
    for(int i = 0; i < N; i++){
        cin >> gv[i];
    }
    sort(gv, gv + N, cmp);
    for(int i = 0; i < N; i++){
        cout << gv[i];
    }
}