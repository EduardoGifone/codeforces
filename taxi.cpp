#include <bits/stdc++.h>
using namespace std;

int arr[4];

int main() {
	int n, a, m;
	cin >> n;

	for (int i = 0; i < 4; i++){
		arr[i] = 0;
	}

	int count = 0;
	
	for (int i = 0; i < n; i++){
		cin >> a;
		arr[a-1]++;
	}

	count += arr[3];

	m = min(arr[2], arr[0]);

	count += m;

	arr[0] = abs(arr[0] - m);
	arr[2] = abs(arr[2] - m);

	count += arr[2];

	count += (2*arr[1])/4;

	arr[1] = ((2*arr[1])%4)/2;

	if (arr[1] == 1 && arr[0] == 0)
		count++;

	if (arr[1] == 1 && arr[0] > 0){
		if (arr[0] == 1){
			count++;
			arr[0] -= 1;
		}
		if (arr[0] >= 2){
			count++;
			arr[0] -= 2;
		}
	}

	if (arr[0] != 0)
		count += ceil((float)arr[0]/4.0);
	
	cout << count << endl;

	return 0;
}