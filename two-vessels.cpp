#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	float a, b, c;
	float result;
	while(t--){
		cin >> a >> b >> c;
		result = (a+b)/2;
		result -= min(a,b);
		result = ceil(result/c);
		cout << result << endl;
	}


	return 0;
}