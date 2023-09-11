#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, odd = 0, even = 0, flag = 1;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	if (odd > even) flag = 0;

	for (int i = 0; i < n; i++){
		if (arr[i] % 2 == flag){
			cout << i+1 << endl;
			return 0;	
		}

	}


	return 0;
}