#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, a;
  cin >> n;
  
  int arr[n];

  for (int i = 0; i < n; i++)
    arr[i] = 0;

  cin >> p;

  for (int i = 0; i < p; i++){
    cin >> a;
    arr[a-1] = 1;
  }

  cin >> q;

  for (int i = 0; i < q; i++){
    cin >> a;
    arr[a-1] = 1;
  }

  for(int i = 0; i < n; i++){
    if(arr[i] == 0){
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
    
  cout << "I become the guy." << endl;
  return 0;
}