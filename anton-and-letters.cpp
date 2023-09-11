#include <bits/stdc++.h>
using namespace std;

string already = "";

bool search(char x){
	for (int i = 0; i < already.length(); i++){
		if(already[i] == x)
			return true;
	}
	return false;
}

int main() {
	int count = 0;
	char w;
	
	do {
		cin >> w;
		if (w != '{' &&  w != ',' && w != ' ' && w != '}'){
			if (!search(w)){
				count++;
				already += w;
			}
		}

	} while (w != '}');

	cout << count << "\n";

	return 0;
}