// Tema 4- hoja 1 - ejercicio 3

#include <iostream>
#include <string>
using namespace std;
#include <locale>

struct tFecha {
	int dia;
	int mes;
	int anio;
};

tFecha leerFecha();
bool fechaValida(tFecha fecha);
void mostrarFecha(tFecha fecha);
string comparar(tFecha f1, tFecha f2);

int main() {
	tFecha fecha1, fecha2;

	locale::global(locale("spanish")); // configuración regional

	cout << "Primera fecha.-" << endl;
	fecha1 = leerFecha();
	cout << "Segunda fecha.-" << endl;
	fecha2 = leerFecha();
	mostrarFecha(fecha1);
	cout << " es..." << endl;
	cout << comparar(fecha1, fecha2);
	cout << "...que ";
	mostrarFecha(fecha2);

	return 0;
}


tFecha leerFecha() {
	tFecha fecha;
	cout << "Dia" << endl;
	cin >> fecha.dia;
	cout << "Mes" << endl;
	cin >> fecha.mes;
	cout << "Anio" << endl;
	cin >> fecha.anio;

	return fecha;
	 

}


bool fechaValida(tFecha fecha) {


}


void mostrarFecha(tFecha fecha) {


}


string comparar(tFecha f1, tFecha f2) {


}