#include <bits/stdc++.h>
using namespace std;

// En este caso la variable 'a' almacena automaticamente la referencia
void square(int& a){a *= a;}

// En este caso nosotros tenemos que pasar la referencia
void square2(int* a){*a *= *a;}

int main() {
	int x = 23;

	// Para inicializar un puntero tenemos dos formas validas
	// Primera
	int* a;
	a = &x;
	// Segunda	
	int* b = &x;
	// Para obtener el valor tenemos que usar *
	cout << *a << ' ' << *b << '\n';
	x += 10;
	*a += 10;
	*b += 10;
	cout << *a << ' ' << *b << '\n';

	cout << '\n';

	// Para inicialiar una variable por referencia solo tenemos una forma
	int& c = x; 

	cout << c << '\n';
	c += 10;
	cout << c << '\n';

	cout << *a << ' ' << *b << ' ' << c << ' ' << x << '\n';

	cout << '\n';

	// Para pasar valores a una funcion tenemos dos fornas
	// VALOR | REFERENCIA
	int m = 10;
	cout << m << '\n';
	square(m);
	cout << m << '\n';
	square2(&m);
	cout << m << '\n';

	return 0;
}