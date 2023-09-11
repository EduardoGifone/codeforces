#include <bits/stdc++.h>
using namespace std;

int main (){
  string A,B;
  bool x = false;
  cin >> A >> B;
  for (int i = 0; i < A.length(); i++){
    A[i] = tolower(A[i]);
    B[i] = tolower(B[i]);
    if (A[i] < B[i]){
      cout << -1 << endl;
      x = false;
      break;
    }
    else if (A[i] > B[i]){
      cout << 1 << endl;
      x = false;
      break;
    }
    else {
      x = true;
    }
  }
  if (x) {
    cout << 0 << endl;
  }
  return 0;
}
