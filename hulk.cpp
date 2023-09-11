#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; 
  cin >> n;
  string word = "";

  for(int i = 0; i < n; i ++){
    if (i % 2 == 0)
      word += "I hate ";
    else
      word += "I love ";
    
    if (i+1 < n)
      word += "that ";
  }

  word += "it";

  cout << word << endl;
  return 0;
}