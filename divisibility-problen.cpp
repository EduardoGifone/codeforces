#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b, temp;
  cin >> t;
  while (t--){
    cin >> a >> b;
    if(a % b != 0){
      temp = a / b;
      temp++;
      cout << b*temp - a << endl;
    }
    else
      cout << 0 << endl;
  }

  return 0;
}