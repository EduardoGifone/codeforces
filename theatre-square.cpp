#include <bits/stdc++.h>
using namespace std;

int main (){
  double n,m,a;
  long long result;
  scanf("%lf %lf %lf",&n,&m,&a);
  result = ceil(n/a) * ceil(m/a);
  cout << result << endl;
  return 0;
}
