#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    int a, b;

    cin >> n >> m;

    vector<int> ans(n);

    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        ans.at(a - 1)++;
        ans.at(b - 1)++;
    }

    for (int i = 0; i < n; i++) {
        cout << ans.at(i) << endl;
    }
    
}