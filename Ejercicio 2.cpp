#include<iostream>
using namespace std;
int main() {
	long long codigo;
	int DD, MM, AAAA, PP;
	bool Pere;
	char TT;

	cout << "Ingrese el codigo: " << endl;
	cin >> codigo;

	DD = codigo / 10000000000;
	codigo = codigo % 10000000000;
	MM = codigo / 100000000;
	codigo = codigo % 100000000;
	AAAA = codigo / 10000;
	codigo = codigo % 10000;
	TT = codigo / 100;
	codigo % 100;
	PP = codigo;
	Pere = (PP < 0);

	cout << "Dia de vencimiento: " << DD << endl;
	cout << "Mes de vencimiento: " << MM << endl;
	cout << "Anio de vencimiento: " << AAAA << endl;
	cout << "El tipo de producto es: " << TT << endl;
	cout << "Producto perecible (0:No;1:Si): " << Pere << endl;

	system("pause");
}