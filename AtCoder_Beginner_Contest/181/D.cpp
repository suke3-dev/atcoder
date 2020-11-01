#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;
    int mojiLength = 0;
    bool judge = false;

    mojiLength = s.size();
    if (mojiLength <= 2) {
        int num = atoi(s.c_str());
        if (num % 8 == 0) {
            judge = true;
        }
    }else{

        // 下3桁が2の倍数であればよい
        // 文字列から3つ取り出し、2の倍数を作れれば並び替えで8の倍数ができる
        for(int i = 0; i < mojiLength; i++){
            for(int j = i + 1; j < mojiLength; j++){
                for(int k = j + 1; k < mojiLength; k++) {
                    if((s.at(i) * 100 + s.at(j) * 10 + s.at(k)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                    if((s.at(i) * 100 + s.at(k) * 10 + s.at(j)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                    if((s.at(j) * 100 + s.at(i) * 10 + s.at(k)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                    if((s.at(j) * 100 + s.at(k) * 10 + s.at(i)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                    if((s.at(k) * 100 + s.at(j) * 10 + s.at(i)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                    if((s.at(k) * 100 + s.at(i) * 10 + s.at(j)) % 2 == 0) {
                        judge = true;
                        break;
                    }
                }
                if (judge == true) {
                    break;
                }
            }
            if (judge == true) {
                break;
            }

        }
    }

    
    if (judge == true) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;    
    }
}
