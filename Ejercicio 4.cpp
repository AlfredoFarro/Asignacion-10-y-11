#include<iostream>
using namespace std;
int main() {
	long long codigo;
	int UUU, DD, MM, AAAA, F;
	char PP1, PP2, Fragilidad, Vencido;
	
	cout << "Escriba el codigo: " << endl;
	cin >> codigo;

	UUU = codigo / 10000000000000;
	codigo = codigo % 10000000000000;
	F = codigo / 1000000000000;
	codigo = codigo % 1000000000000;
	PP1 = codigo / 10000000000;
	codigo = codigo % 10000000000;
	PP2 = codigo / 100000000;
	codigo = codigo % 100000000;
	DD = codigo / 1000000;
	codigo = codigo % 1000000;
	MM = codigo / 10000;
	codigo = codigo % 10000;
	AAAA = codigo;
	Fragilidad = (F == 0)*'S' + (F !=0 )*'N';
	Vencido = (AAAA >= 2015)*'S' + (AAAA < 2015)*'N';

	cout << "Numero unico: " << UUU << endl;
	cout << "Fragil (N:No;S:Si) : " << Fragilidad << endl;
	cout << "Pais de procedencia: " << PP1 << PP2 << endl;
	cout << "Dia, mes y anio de vencimiento: " << DD << "-" << MM << "-" << AAAA << endl;
	cout << "Bien se encuentra vencido al dia de hoy (N:No;S:Si) : " << Vencido << endl;


	system("pause");
}