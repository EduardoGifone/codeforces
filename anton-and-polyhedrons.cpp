#include <bits/stdc++.h>
using namespace std;

string figures = "TCODI";
int arr[5] = {4, 6, 8, 12, 20};

int search(char x){
	for (int i = 0; i < 5; i++){
		if (figures[i] == x)
			return arr[i];
	}
	return -1;
}

int main() {

	int n, count = 0;
	cin >> n;

	string word;
	
	for (int i = 0; i < n; i++){
		cin >> word;
		count += search(word[0]);
	}

	cout << count << endl;

	return 0;
}