#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    string check;
    long unsigned int checkCount;
    int ansStart = 0;
    int ansEnd = 0;
    bool checkFlg = false;
    cin >> s;

    // アンバランスな事象は文字列sの長さの半分以上の場合に判断できる
    for (long unsigned int i = 0; i < s.size() / 2; i++) {
        // 偶数と奇数で確認する文字数を調整
        if (s.size() % 2 == 0) {
            check = s.substr(i, (s.size() / 2) + 1);
        }
        else {
            check = s.substr(i, (s.size() / 2) + 2);
        }
        checkCount = 0;
        for (long unsigned int j = 0; j < check.size(); j++) {
            if (check.at(0) == check.at(j)) {
                checkCount++;
            }
        }
        
        // 偶数と奇数で確認する文字数を調整
        if (s.size() % 2 == 0) {
            if (checkCount >= s.size() / 2) {
                ansStart = i + 1;
                ansEnd = i + check.size();
                cout << ansStart << " " << ansEnd << endl;
                checkFlg = true;
                break;
            } 
        }
        else {
            if (checkCount >= s.size() / 2 + 1) {
                ansStart = i + 1;
                ansEnd = i + check.size();
                cout << ansStart << " " << ansEnd << endl;
                checkFlg = true;
                break;
            } 
        }
        
    }
  
    if (!checkFlg) {
        cout << -1 << " " << -1 << endl;
    }

}
