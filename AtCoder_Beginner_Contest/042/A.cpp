#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, c;
    int count5 = 0;
    int count7 = 0;


    cin >> a >> b >> c;
    
    if (a == 5) {
        count5++;
    }
    else if (a == 7) {
        count7++;
    }
    
    if (b == 5) {
        count5++;
    }
    else if (b == 7) {
        count7++;
    }

    if (c == 5) {
        count5++;
    }
    else if (c == 7) {
        count7++;
    }

    if (count5 == 2 && count7 == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
