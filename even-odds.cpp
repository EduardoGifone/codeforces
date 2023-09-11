#include <bits/stdc++.h>
using namespace std;

int main (){
  double n, k;
  long long result;
  cin >> n >> k;

  if(ceil(n/2.0) >= k){
    result = k*2 - 1;
  }
  else{
    result = (k - ceil(n/2.0))*2;
  }

  cout << result << endl;

  return 0;
}