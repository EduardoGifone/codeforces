#include <bits/stdc++.h>
using namespace std;

int main (){
  string a, b, r = "";
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++) {
    if(a[i] == b[i])
      r += '0';
    else
      r += '1';
  }
  cout << r << endl;
  return 0;
}