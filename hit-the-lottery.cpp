#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	int arr[] = {100, 20, 10, 5, 1};

	cin >> n;

	int i = 0;
	while(n != 0){
		count += n/arr[i];
		n %= arr[i];
		i++;
	}

	cout << count << endl;

	return 0;
}