#include <bits/stdc++.h>
using namespace std;

int main (){
  float n, x = 1.0, p;
  float result = 0.0;

  cin >> n;
  
  float N = n;

  while(n--){
    cin >> p;
    result += x * ( p / 100.0);
  }

  result = result / N;
  
  cout << result*100 << endl;

  return 0;
}