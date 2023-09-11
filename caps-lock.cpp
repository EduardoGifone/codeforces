#include <bits/stdc++.h>
using namespace std;

int main() {
	bool s = true;
	bool change = false;
	char x;

	string word;
	cin >> word;

	for (int i = 1; i < word.length(); i++){
		x = toupper(word[i]);
		if (word[i] != x)	{
			s = false;
			break;
		}
	}

	if (s == true) change = true;

	if (change){
		for (int i = 0; i < word.length(); i++){
			x = toupper(word[i]);
			if(word[i] != x)
				word[i] = toupper(word[i]);
			else
				word[i] = tolower(word[i]);
		}
	}

	cout << word << endl;

	return 0;
}