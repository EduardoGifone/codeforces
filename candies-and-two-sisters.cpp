#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a;
	cin >> t;
	while(t--){
		cin >> n;
		a = (n/2) + 1;
		a = n - a;
		cout << a << endl;
	}

	return 0;
}