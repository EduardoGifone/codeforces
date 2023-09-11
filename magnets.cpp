#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, count = 1;
  cin >> n;
  string primary, second;

  cin >> primary;
  for (int i = 0; i < n-1; i++){
    cin >> second;
    if(primary[1] == second[0])
      count++;
    primary = second;
  }

  cout << count << endl;

  return 0;
}
