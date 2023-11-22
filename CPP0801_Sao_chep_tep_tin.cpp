#include <bits/stdc++.h>
using namespace std;

int main(void) {
	fstream in;
	in.open("PTIT.in", ios::in);
	string word;
	while(in >> word){
		cout << word << ' ';
	}
	in.close();
}