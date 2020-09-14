#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
  	cin >> n;
    int count = 0;
    vector<int> a(n);
    bool FlgOdd = false;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    while(!FlgOdd) {
        for(int i = 0; i < n; i++) {
            if((a.at(i) % 2) != 0) {
                FlgOdd = true;
                break;
            }
            else {
                a.at(i) = a.at(i) / 2;
            }
        }
        
        // 全部回してbreakしなかったらcountup
        if (!FlgOdd) {
            count++;
        }

    }

    cout << count << endl;
}
