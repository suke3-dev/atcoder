#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x,y;
    int totalCount = 0;
    vector<double> a(n),b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a.at(i) >> b.at(i);
    }

    
    
    // x = a, y = a のようなパターンを探す
    for (int i = 0; i < n; i++) {
        totalCount = 0;
        for(int j = 0; j < n; j++){
            if (a.at(i) == a.at(j)) {
                totalCount++;
            }
            if (totalCount >= 3) {
                break;
            }
        }
        if (totalCount >= 3) {
            break;
        }
    }
    if (totalCount < 3) {
        for (int i = 0; i < n; i++) {
            totalCount = 0;
            for(int j = 0; j < n; j++){
                if (b.at(i) == b.at(j)) {
                    totalCount++;
                }
                if (totalCount >= 3) {
                    break;
                }
            }
            if (totalCount >= 3) {
                break;
            }
        }

        if(totalCount < 3) {
            // 一次関数になるものを探す
            // A,B,Cの3点に分け、ABとACの傾きが一致すれば同一直線状とみなせる
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    for(int k = j + 1; k < n; k++) {
                        x = 0;
                        y = 0;

                        x = (b.at(j) - b.at(i)) / (a.at(j) - a.at(i));
                        y = (b.at(k) - b.at(i)) / (a.at(k) - a.at(i));
              
                        if(x == y) {
                            totalCount = 3;
                            break;
                        }
                    }
                    if (totalCount >= 3) {
                        break;
                    }
                }
                if (totalCount >= 3) {
                    break;
                }
            }
        }
    } 
    

    
    if (totalCount >= 3) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;    
    }
}
