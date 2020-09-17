#include <bits/stdc++.h>
using namespace std;

// 追加文字列を定義
vector<string> d(4);

int main() {
    string s;
  	cin >> s;
    
    d = {"dream", "dreamer", "erase", "eraser"};

    // 後ろ読みのためにひっくり返す
    reverse(s.begin(), s.end());
    for (int i = 0; i < d.size(); i++) {
        reverse(d.at(i).begin(), d.at(i).end());
    }


    // 文字列存在チェック
    bool allchecked = false;
    for (int i = 0; i < s.size();) {
        
        // 文字列存在チェック
        bool checked = false;
        for(int j = 0; j < d.size(); j++) {
            if (s.substr(i, d.at(j).size()) == d.at(j)) {
                i += d.at(j).size();
                checked = true;
                break;
            }
        }

        if (!checked) {
            allchecked = false;
            break;
        }
        else {
            allchecked = true;
        }

    }

    if (allchecked) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl;
    }
    
}
