#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    long total; // 合計
    long numCount; // 数字の数
    cin >> n;

    vector<long> a(n),b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a.at(i) >> b.at(i);
    }

    
    
    total = 0;
    for (int i = 0; i < n; i++) {
        numCount = b.at(i) - a.at(i) + 1;
        if (numCount % 2 == 0) {
            total += (a.at(i) + b.at(i)) * (numCount / 2);
        }
        else {
            total += ((a.at(i) + b.at(i)) * (numCount / 2)) + (a.at(i) + (numCount / 2));
        }
    }
    
    cout << total << endl;
}
