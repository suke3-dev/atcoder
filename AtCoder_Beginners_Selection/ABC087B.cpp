#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    int x;
    int totalCoin = 0;
    int count = 0;
  	cin >> a >> b >> c >> x;

    // 500円
    for (int i = 0; i <= a; i++) {
        // 100円
        for (int j = 0; j <= b; j++) {
            // 50円
            for (int k = 0; k <= c; k++) {
                totalCoin = 500 * i + 100 * j + 50 * k;
                if (totalCoin == x) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
