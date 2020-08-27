#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C;
    int minHeight = 0;
    int maxHeight = 0; 
    cin >> A >> B >> C;

    minHeight = min(min(A, B), C);
    maxHeight = max(max(A, B), C);

    cout << maxHeight - minHeight << endl;

}