// 未回答
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    int keta = 0;
    int startKeta = 0;
    string priceStr = "";
    cin >> n >> k;

    vector<int> dislikeNumber(k);
    vector<int> likeNumber;
    for (int i = 0; i < k; i++) {
        cin >> dislikeNumber.at(i);
    }

    keta = log10(n) + 1;
    priceStr = to_string(n);
    vector<int> answerPrice;
    int theNumber = 0;
    
    // 嫌いな数字を小さい順にソート
    sort(dislikeNumber.begin(), dislikeNumber.end());

    // 使える数字を探す
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < k + 1; j++) {
            if (j == k) {
                likeNumber.push_back(i);
                break;
            }
            if (i == dislikeNumber.at(j)) {
                break;
            }
            
        }
    }
    
    // theNumber = n / (10^(keta - 1));
    theNumber = 10^(keta - 1);
    cout << theNumber << endl;
    // char a = priceStr(i);
    for (int j = 0; j < (int)likeNumber.size(); j++) {
        if (priceStr.at(0) <= likeNumber.at(j)) {
            answerPrice.push_back(likeNumber.at(j));
            break;
        }
    }
    
    
    if (answerPrice.size() == 0) {
        answerPrice.push_back(likeNumber.at(1));
        answerPrice.push_back(likeNumber.at(0));
        startKeta += 2;
    }

    for (int i = 1; i < keta; i++) {
        // char a = priceStr(i);
        for (int j = 0; j < (int)likeNumber.size(); j++) {
            cout << priceStr.at(i) << likeNumber.at(j) << endl;
            if (priceStr.at(i) <= likeNumber.at(j)) {
                cout << "YES" << endl;
                answerPrice.push_back(likeNumber.at(j));
                break;
            }
        }
    }

    for (int i = 0; i < (int)answerPrice.size(); i++) {
        cout << answerPrice.at(i);
    }

    cout << endl;
    

}