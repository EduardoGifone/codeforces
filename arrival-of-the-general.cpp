#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, min = 200, pos_min, max = -1, pos_max, temp;
  cin >> n;
 
  for (int i = 0; i < n; i++){
    cin >> temp;
    if (temp > max){
      max = temp;
      pos_max = i;
    }
    if (temp <= min){
      min = temp;
      pos_min = i;
    }
  }
 
  if(pos_max > pos_min)
    pos_min++;
 
  cout << (pos_max - 0) + (abs(pos_min - (n - 1))) << endl;
 
 
  return 0;
}