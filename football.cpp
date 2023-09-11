#include <bits/stdc++.h>
using namespace std;

int main (){
  string w;
  cin >> w;
  int count = 1;

  for (int i = 0; i < w.length()-1; i++) {
    if (w[i] == w[i+1])
      count++;
    else
      count = 1;

    if (count > 6)
      break;
  }

  if (count > 6)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
