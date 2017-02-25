#include <iostream>
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <cmath>

const double PI = 3.1415926535;

inline double volumenesfera(const double radio) {
	return 4.0 / 3.0 * PI * pow(radio, 3);
}

inline double area(double L) {
	return L *= L;
}
inline double areaporreferencia(double &L) {
	return L *= L;

}

inline double arearectangulo(const double b, const double h) {
	return b*h;
}

int main(int argc, char** argv) {

	setlocale(LC_CTYPE, "Spanish");

	double radio;
	double base;
	double altura;
	string respuesta;
	do {
		cout << "�Hola!" << endl;
		cout << "Este programa te permite calcular el volumen de una esfera; as� como\n"
			"calcular el area de un cuadrado u rect�ngulo\n\n";
		cout << "para calcular el volumen de una esfera presiona la tecla 'v' seguido\n"
			"de la tecla Enter; pero, si lo que deseas es calcular el �rea de un cuadrado\n"
			"u rect�ngulo, presiona la tecla 'a' seguido de la tecla Enter.\n";
		cin >> respuesta;
		system("CLS");
	} while (respuesta != "v" && respuesta != "V" && respuesta != "a" && respuesta != "A");

	if (respuesta == "v" || respuesta == "V") {
		// Calculo del volumen de la esfera.

		string respuesta;
		do {
			cout << "�Vamos a calcular el volumen de una esfera!" << endl << endl;
			cout << "para calcularlo necesito saber el valor del di�metro o radio de la esfera" << endl;
			cout << "Presiona la tecla 'd' para usar el di�metro o la tecla 'r' para usar el radio" << endl;
			cout << "seguido de la tecla Enter para confirmar." << endl;
			cin >> respuesta;
			system("CLS");
		} while (respuesta != "d" && respuesta != "r" && respuesta != "D" && respuesta != "R");

		if (respuesta == "d" || respuesta == "D") {
			cout << "�Cu�l es la longitud del di�metro de la esfera?" << endl;
			cin >> radio;
			radio = radio / 2;
		}

		else {
			cout << "�Cu�l es la longitud del radio de la esfera?" << endl;
			cin >> radio;
		}

		cout << " La esfera de radio " << radio << " cm y cuyo di�metro es de: " << radio * 2 << " cm \n"
			"tiene un volumen de: " << volumenesfera(radio) << " cm c�bicos " << endl << endl;

	}

	else {
		do {
			cout << "�Vamos a calcular el �rea de un cuadrado u rect�ngulo" << endl;
				cout << "para calcular el �rea de un cuadrado presiona la tecla 'c', pero si quieres\n"
				"puedes calcular el �rea de un rect�ngulo presionando la tecla 'r', seguido\n"
				"de la tecla Enter\n";
			cin >> respuesta;
			system("CLS");

			if (respuesta == "c" || respuesta == "C") {
				cout << "�Cuanto mide el lado del cuadrado?" << endl;
				cin >> base;
				cout << "El area del cuadrado es de: " << area(base) << " cm cuadrados\n\n";

			}

			else {
				cout << "�Cu�nto mide la base b del rect�ngulo?" << endl;
				cin >> base;
				cout << "�Cu�nto mide la altura h del rect�ngulo?" << endl;
				cin >> altura;
				cout << "El �rea del rect�ngulo es de: " << arearectangulo(base, altura) << " cm cuadrados\n\n";
			}
		} while (respuesta != "c" && respuesta != "C" && respuesta != "r" && respuesta != "R");
	}

	system("pause");
	return 0;
}


