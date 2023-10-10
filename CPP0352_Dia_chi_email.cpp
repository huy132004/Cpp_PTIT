#include <bits/stdc++.h>
using namespace std;

vector<string> email;
vector<int> demEmailTrung;

void nhapDataEmail(char name[10][10], int wordCount, int stt){
    int i = wordCount - 1;
    int len = strlen(name[i]);

    email[stt] = "";
    for(int j = 0; j < len; j++){
        email[stt] += (char) tolower(name[i][j]);
    }
    for(i = 0; i < wordCount-1; i++){
        email[stt] += (char) tolower(name[i][0]);
    }
    demEmailTrung[stt] = 1;

    for(int k = 0; k < stt; k++){
        if(email[k] == email[stt]){
            ++demEmailTrung[stt];
        }
    }
}

void inEmail(){
    for(int n = 0; n < email.size(); n++){
        cout << email[n];
        if(demEmailTrung[n] > 1) cout << demEmailTrung[n];
        cout << "@ptit.edu.vn" << endl;
    }
}

int main(){
    int soTen;
    cin >> soTen >> ws;
    email.resize(soTen);
    demEmailTrung.resize(soTen);
    // char ten[số tên][các từ trong tên][các chữ cái trong từ]
    char ten[soTen][10][10];
    int soTu[10];
    for(int stt = 0; stt < soTen; stt++){
        soTu[stt] = 0;
        char kitu;
        do{
            cin >> ten[stt][soTu[stt]];
            ++soTu[stt];
            kitu = getchar();
        } while(kitu != '\n');
    }
    for(int stt = 0; stt < soTen; stt++){
        nhapDataEmail(ten[stt], soTu[stt], stt);
    }
    inEmail();
}