#include<iostream>
using namespace std;
int main() {
	double exp, sueldo, sueldoTotal;
	char naci;

	cout << "Escriba los años de experiencia: " << endl;
	cin >> exp;
	cout << "Escriba el lugar de nacimiento: " << endl;
	cin >> naci;

	sueldo = (exp == 0) * 900 + (exp >= 1 && exp <= 5)*(900 + exp / 100 * 900) + (exp > 5)*(1000 + exp / 100 * 900);
	sueldoTotal = (naci == 'L')*sueldo*1.15 + (naci == 'F')*sueldo*1.20;

	cout << "El sueldo del trabajador es: " << sueldoTotal << endl;

	system("pause");
}