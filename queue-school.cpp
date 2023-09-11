#include <bits/stdc++.h>
using namespace std;

int main (){
  int n, t;
  cin >> n >> t;
  string queue, temp = "";
  cin >> queue;
  queue += " ";

  while (t--){
    for (int i = 0; i < queue.length(); i++){
      if( queue[i] == 'B' && queue[i+1] == 'G') {
        temp += "GB";
        i++;
      }
      else {
        temp += queue[i];
      }
    }
    queue = temp + " ";
    temp = "";
  }

  cout << queue << endl;

  return 0;
}
