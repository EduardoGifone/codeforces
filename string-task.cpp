#include <bits/stdc++.h>
using namespace std;

bool search(char w) {
  string vowels = "aoyeui";
  for (int i = 0; i < vowels.length(); i++){
    if (w == vowels[i])
      return true;
  }
  return false;
}

int main (){
  string word, temp;
  string result = "";
  
  cin >> word;

  for (int i = 0; i < word.length(); i++){
    if (!search(tolower(word[i]))){
      result += ".";
      result += tolower(word[i]);
    }
  }

  cout << result << endl;
  
  return 0;
}
