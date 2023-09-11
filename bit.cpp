#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, x = 0;
  string statement;
  cin >> n;
  while(n--){
    cin >> statement;
    for (int i = 0; i < statement.length(); i++){
      if (statement[i] == '+') {
        x++;
        break;
      }
      if (statement[i] == '-') {
        x--;
        break;
      }
    }
  }
  cout << x << endl;
  return 0;
}
