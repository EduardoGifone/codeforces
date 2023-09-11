#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> db;
	string user;
	int n;
	cin >> n;

	while(n--){
		cin >> user;
		if(!db.count(user)){
			db[user] = 1;
			cout << "OK" << endl;
		}
		else {
			cout << user << db[user] << endl;
			db[user]++;
		}
	}

	return 0;
}