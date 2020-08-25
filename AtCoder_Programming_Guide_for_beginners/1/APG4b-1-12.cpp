#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t;
    int ans = 1;

    getline(cin, s);

    for (int i = 1; i < s.size(); i += 2)
    {
        if (s.at(i) == '+') 
        {
            ans += 1;
        }
        else
        {
            ans -= 1;
        }
    }

    cout << ans << endl;
    
}