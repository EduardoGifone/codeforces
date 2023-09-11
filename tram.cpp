#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, a, b, max = -1, people = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    people = people - a + b;
    if (people > max)
      max = people;
  }
  
  cout << max;

  return 0;
}
