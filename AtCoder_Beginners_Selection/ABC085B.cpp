#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int kagamiMochi = 0;
  	cin >> n;
    
    vector<int> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d.at(i);
    }
    
    sort(d.rbegin(), d.rend());
    
    for (int i = 1; i < n; i++) {
        if (d.at(i) !=  d.at(i - 1)) {
            kagamiMochi += 1;
        }
    }
    
    kagamiMochi += 1;
    
    cout << kagamiMochi << endl;
}
