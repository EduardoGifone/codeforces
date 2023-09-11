#include <bits/stdc++.h>
using namespace std;

int main (){
  int n,a,b,c,count = 0;
  cin >> n;
  while(n--){
    scanf("%d %d %d", &a, &b, &c);
    if (a+b+c > 1){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
