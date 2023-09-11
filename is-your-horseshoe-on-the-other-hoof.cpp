#include <bits/stdc++.h>
using namespace std;

int  arr[4];
int arr2[4];
int n = 4;

bool search(int s){
  for(int i = 0; i < n; i++){
    if(arr2[i] == s)
      return true;
  }
  return false;
}

int main (){
  int count = 0;

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++){
    arr2[i] = -1;
  }

  for(int i = 0; i < n; i++){
    if(!search(arr[i])){
      arr2[i] = arr[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr2[i] == -1)
      count++;
  }

  cout << count << endl;

  return 0;
}