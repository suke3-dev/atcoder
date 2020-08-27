#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int ave;
    int sum;
    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        sum += a.at(i);
    }
    
    ave = sum / n;
    
    for (int i = 0; i < n; i++) {
        if (ave > a.at(i)) {
            cout << ave - a.at(i) << endl;
        }
        else if (ave < a.at(i)) {
            cout << a.at(i) - ave << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    
}