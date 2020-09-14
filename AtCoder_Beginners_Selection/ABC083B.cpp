#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    int answer = 0;
  	cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int sum = 0;
      	int x = i;
        while(x > 9) {
            sum += x % 10;
            x /= 10;
        }
        sum += x;

        if(a <= sum && sum <= b) {
            answer += i;
        }
    }

    cout << answer << endl;
}
