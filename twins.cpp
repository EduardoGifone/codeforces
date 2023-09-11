#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, sum = 0, sum2 = 0, count = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }

  sort(arr, arr + n);

  int j = n-1;
  while(sum2 <= sum && j >= 0){
    sum2 += arr[j];
    sum -= arr[j];
    count++; 
    j--;
  }

  cout << count << endl;

  return 0;
}
