#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, a=0,d=0;
  cin >> n;
  string word;
  cin >> word;
  for (int i = 0; i < n; i++) {
    if (word[i] == 'A')
      a++;
    else
      d++;
  }

  if (a>d)
    cout << "Anton" << endl;
  else if (a<d)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl;

  return 0;
}
