#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

void nhapDataEmail(const string &ten, unordered_set<string> &emailSet) {
    string email;
    bool capitalizeNext = true;
    for (char c : ten) {
        if (isalpha(c)) {
            if (capitalizeNext) {
                email += tolower(c);
                capitalizeNext = false;
            }
        } else {
            capitalizeNext = true;
        }
    }
    emailSet.insert(email);
}

void inEmail(const unordered_set<string> &emailSet) {
    for (const string &email : emailSet) {
        cout << email << "@ptit.edu.vn" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Loại bỏ ký tự new line sau N
    unordered_set<string> emailSet;
    
    for (int i = 0; i < N; i++) {
        string ten;
        getline(cin, ten);
        nhapDataEmail(ten, emailSet);
    }
    
    inEmail(emailSet);
    return 0;
}
