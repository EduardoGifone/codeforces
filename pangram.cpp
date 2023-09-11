#include <bits/stdc++.h>
using namespace std;

bool search(char x, string word, int n){
  for (int i = 0; i < n; i++){
    if(tolower(word[i]) == x)
      return true;
  }
  return false;
}

 
int main() {
  int n;
  cin >> n;
  string word;
  cin >> word;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < alphabet.length(); i++){
    if(!search(alphabet[i], word, n)){
      cout << "NO" << endl;
      return 0;
    }
  }
  
  cout << "YES" << endl;
  return 0;
}