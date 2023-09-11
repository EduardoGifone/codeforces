#include <bits/stdc++.h>
using namespace std;

int search(int i, int arr[], int n) {
  for (int k = 0; k < n; k++){
    if(arr[k] == i)
      return k+1;
  }
  return -1;
}

int main (){
  int n,a;
  cin >> n;
  int arr[n], arr2[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++){
    arr2[i] = search(i+1,arr,n);
  }

  for(int i = 0; i < n; i++)
    cout << arr2[i] << " ";

  cout << endl;
  return 0;
}
