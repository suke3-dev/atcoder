#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    vector<long long> answer(4);
    cin >> a >> b >> c >> d;

    answer.at(0) = a * c;
    answer.at(1) = a * d;
    answer.at(2) = b * c;
    answer.at(3) = b * d;
    
    sort(answer.rbegin(), answer.rend());
    cout << answer.at(0) << endl;
}