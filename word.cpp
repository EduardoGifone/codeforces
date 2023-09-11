#include <bits/stdc++.h>
using namespace std;

bool isLower(char w){
  if (w == tolower(w))
    return true;
  return false;
}

void toLower(string word){
  for (int i = 0; i < word.length(); i++)
    word[i] = tolower(word[i]);
  cout << word << endl;
}

void toUpper(string word){
  for (int i = 0; i < word.length(); i++)
    word[i] = toupper(word[i]);
  cout << word << endl;
}

int main (){
  int m = 0, M = 0;
  string word;
  cin >> word;

  for (int i = 0; i < word.length(); i++) {
    if(isLower(word[i]))
      m++;
    else
      M++;
  }

  if(m >= M)  
    toLower(word);
  else 
    toUpper(word);

  return 0;
}
