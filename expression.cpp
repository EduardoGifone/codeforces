#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, max = -1, result;
  cin >> a >> b >> c;

  result = a + b + c;
  if (result >= max)
    max = result;
  result = (a + b) * c;
  if (result >= max)
    max = result;
  result = a + b * c;
  if (result >= max)
    max = result;
  result = a * b + c;
  if (result >= max)
    max = result;
  result = a * (b + c);
  if (result >= max)
    max = result;
  result = a * b * c;
  if (result >= max)
    max = result;

  cout << max << endl;

  return 0;
}