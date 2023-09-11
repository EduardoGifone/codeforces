#include <bits/stdc++.h>
using namespace std;

string word(){
  string _word;
  cin >> _word;
  int len = _word.length();
  if (len > 10){
    return _word[0] + to_string(len - 2) + _word[len - 1];
  }
  return _word;
}

int main (){
  int n;
  cin >> n;
  while(n--){
    cout << word() << endl;
  }
  return 0;
}
