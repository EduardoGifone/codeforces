#include <bits/stdc++.h>
using namespace std;

int main (){
  string word1, word2;
  cin >> word1 >> word2;
  if (word1.length() != word1.length())
    cout << "NO" << endl;
  else{
    int n = word1.length();
    for (int i = 0; i < n; i++) {
      if (word1[i] != word2[n-1-i]){
        cout << "NO" << endl;
        return 0;
      }
    }
    cout << "YES" << endl;
  }
  return 0;
}
