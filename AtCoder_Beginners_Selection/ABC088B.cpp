#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int alicePoint = 0;
    int bobPoint = 0;
  	cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    
    sort(a.rbegin(), a.rend());
    
    for (int i = 0; i < n; i++) {
        if (i % 2 ==  0) {
            alicePoint += a.at(i);
        }
        else {
            bobPoint += a.at(i);
        }
    }
    
    cout << alicePoint - bobPoint << endl;
}
