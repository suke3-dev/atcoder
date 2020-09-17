#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    bool reached = true;
  	cin >> n;
    
    vector<int> t(n + 1);
    vector<int> x(n + 1);
    vector<int> y(n + 1);
    
    // スタート地点は(0, 0)
    t.at(0) = 0;
    x.at(0) = 0;
    y.at(0) = 0;

    for (int i = 1; i <= n; i++) {
        cin >> t.at(i) >> x.at(i) >> y.at(i);
    }
    
    for (int i = 1; i <= n; i++) {
        // ストレートに目的地まで行けるかチェック
        int subTime = t.at(i) - t.at(i - 1);
        int subDistance = abs(x.at(i) - x.at(i - 1)) + abs(y.at(i) - y.at(i - 1));

        if (subTime < subDistance) {
            reached = false;
            break;
        }

        // 時間内に目的地に到着した後は隣と往復すればよいので
        // 残り時間が偶数の場合は到着可能
        subTime -= subDistance;

        if (subTime % 2 != 0) {
            reached = false;
            break;
        }
    }

    if (reached) {
        cout << "Yes" << endl; 
    }
    else {
        cout << "No" << endl;
    }
    
}
