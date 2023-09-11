#include <bits/stdc++.h>
using namespace std;

bool search(char w, string r){
  for (int i = 0; i < r.length(); i++){
    if (w == r[i])
      return true;
  }
  return false;
}

int main (){
  string word, r = "";
  cin >> word;

  for (int i = 0; i < word.length(); i++) {
    if (!search(word[i], r))
      r += word[i];
  }

  if (r.length() % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;

  return 0;
}
