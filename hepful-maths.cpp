#include <bits/stdc++.h>
using namespace std;

int main (){
  string operation;
  cin >> operation;
  string array[105];
  int j = 0;
  for (int i = 0; i < operation.length(); i+=2){
    array[j] = operation[i];
    j++;
  }

  sort(array, array + j);

  for(int i = 0; i < j; i++){
    if(i == j-1){
      cout << array[i];
    }
    else {
      cout << array[i] << '+';
    }
  }

  cout << endl;
  
  return 0;
}
