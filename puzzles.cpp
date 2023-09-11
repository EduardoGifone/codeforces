#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, best = 2000;
	cin >> n >> m;

	int arr[m];

	for (int i = 0; i < m; i++){
		cin >> arr[i];
	}

	sort(arr, arr+m);

	for(int i = 0; i <= (m-n); i++){
		best = min(best, arr[i+n-1] - arr[i]);
	}

	cout << best << endl;

	return 0;
}