#include <bits/stdc++.h>
using namespace std;

int main (){
  int n,x,y,z;
  int vector[] = {0,0,0};
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    vector[0] += x;
    vector[1] += y;
    vector[2] += z;
  }

  if (vector[0] == 0 && vector[1] == 0 && vector[2] == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
