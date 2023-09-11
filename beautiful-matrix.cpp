#include <bits/stdc++.h>
using namespace std;

int main (){
  int value, result;
  int matrix[5][5];
  for(int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      cin >> value;
      matrix[i][j] = value;
      if (value == 1){
        result = abs(2-i) + abs(2-j);
      }
    }
  }
  cout << result << endl;
  return 0;
}
