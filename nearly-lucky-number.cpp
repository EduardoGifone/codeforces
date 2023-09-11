#include <bits/stdc++.h>
using namespace std;

int main (){
  int count = 0;
  string number;
  cin >> number;

  for (int i = 0; i < number.length(); i++){
    if (number[i] == '4' || number[i] == '7')
      count++;
  }

  if(count == 7 || count == 4)
    cout << "YES" << endl;
  else 
    cout << "NO" << endl;

  return 0;
}
