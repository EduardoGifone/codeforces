#include <bits/stdc++.h>
using namespace std;

int main (){
  string word;
  cin >> word;
  string target = "hello";
  bool flag = false;

  int k = 0;
  for (int i = 0; i < word.length(); i++) {
    if (target[k] == word[i])
      k++;
    if (k >= 5){
      flag = true;
      break;
    }
  }

  if (flag)
    cout << "YES" << endl;
  else 
    cout << "NO" << endl;

  return 0;
}
