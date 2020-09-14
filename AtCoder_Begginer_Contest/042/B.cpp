#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, l;

    cin >> n >> l;

    vector<string> moji(n);
    
    for (int i = 0; i < n; i++) {
        cin >> moji.at(i);
    }
    
    sort(moji.begin(), moji.end());
    
    for (int i = 0; i < n; i++) {
        cout << moji.at(i);
    }

    cout << endl;
}
