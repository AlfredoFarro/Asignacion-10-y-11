#include<iostream>
using namespace std;
int main() {
	double sueldo;
	int puntoSueldo, puntoVivienda, puntoTarjeta, puntoCarga, puntoTotal;
	char Vivienda, Tarjeta, Carga;
	bool Prestamo;

	cout << "Sueldo mensual: " << endl;
	cin >> sueldo;
	cout << "Tipo de vivienda (P:pariente; A:alquilada; M:propia): " << endl;
	cin >> Vivienda;
	cout << "Tarjeta de credito (N:no tiene; S:si tiene): " << endl;
	cin >> Tarjeta;
	cout << "Tiene carga familiar (N:no tiene; S:si tiene): " << endl;
	cin >> Carga;

	puntoSueldo = (sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
	puntoVivienda = (Vivienda == 'P') * 2 + (Vivienda == 'A') * 5 + (Vivienda == 'M') * 10;
	puntoTarjeta = (Tarjeta == 'N') * 0 + (Tarjeta == 'S') * 6;
	puntoCarga = (Carga == 'N') * 3 + (Carga == 'S') * 6;
	puntoTotal = puntoSueldo + puntoVivienda + puntoTarjeta + puntoCarga;
	Prestamo = (puntoTotal > 20)*1 + (puntoTotal < 20)*0;

	cout << "Puntaje Obtenido: " << puntoTotal << endl;
	cout << "Se le otorga el prestamo (0:No; 1:Si): " << Prestamo << endl;

	system("pause");
}