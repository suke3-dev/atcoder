#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p;
  int price;
  cin >> p;
 
  // パターン1
  if (p == 1) {
    // int price;
    cin >> price;
  }
 
  // パターン2
  if (p == 2) {
    string text;
    // int price;
    cin >> text >> price;
    cout << text << "!" << endl;
  }
 
  int N;
  cin >> N;
 

  cout << price * N << endl;
}