#include <bits/stdc++.h>
using namespace std;

int main (){
  int i = 0, a, b;
  cin >> a >> b;

  while(a <= b){
    a *= 3;
    b *= 2;
    i++;
  }

  cout << i << endl;
   
  return 0;
}
