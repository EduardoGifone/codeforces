#include <bits/stdc++.h>
using namespace std;

int arr[200];

bool search(char x, string c){
	for (int i = 0; i < c.length(); i++){
		if(c[i] == x && arr[i] != 0){
			arr[i] = 0;
			return true;
		}
	}
	return false;
}

int main() {
	string a, b, c;
	cin >> a >> b >> c;
	bool flag = true;

	int n = c.length();
	int count = 0;

	for (int i = 0; i < n; i++)
		arr[i] = 1;
	
	for (int i = 0; i < a.length(); i++){
		if(search(a[i], c))
			count++;
		else
			flag = false;
	}

	for (int i = 0; i < b.length(); i++){
		if(search(b[i], c))
			count++;
		else 
			flag = false;
	}

	if ((count - n) == 0 && flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}