#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, y;
  	cin >> n >> y;
    bool endFlag = false;

    // i:一万円の枚数, j:五千円の枚数, k:千円の枚数
    for (int i = 0; i <= n; i++) {
        if (endFlag) {
            break;
        }

        for (int j = 0; j <= n; j++) {
            int k = n - (i + j);

            if (k >= 0) {
                  if ((10000 * i + 5000 * j + 1000 * k) == y) {
                    cout << i << " " << j << " " << k << endl;
                    endFlag = true;
                }
            }
        }
    }

    if (!endFlag) {
         cout << "-1 -1 -1" << endl;
    }
}
