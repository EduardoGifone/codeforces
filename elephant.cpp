#include <bits/stdc++.h>
using namespace std;

int main (){
  int a[] = {5,4,3,2,1};
  int x, result = 0;
  cin >> x;

  for (int i = 0; i < 5; i++) {
    result += x / a[i];
    x -= (x/a[i])*a[i];
  }

  cout << result << endl;
  
  return 0;
}
