#include <bits/stdc++.h>
using namespace std;

bool isDistinct(string number){
  for (int i = 0; i < 3; i++){
    for(int j = i+1; j < 4; j++){
      if (number[i] == number[j])
        return false;
    }
  }
  return true;
}

int main (){
  int year;
  cin >> year;

  do  {
    year++;
  } while(!isDistinct(to_string(year)));

  cout << year << endl;

  return 0;
}
