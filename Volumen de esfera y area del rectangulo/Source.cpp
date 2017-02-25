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
		cout << "¡Hola!" << endl;
		cout << "Este programa te permite calcular el volumen de una esfera; así como\n"
			"calcular el area de un cuadrado u rectángulo\n\n";
		cout << "para calcular el volumen de una esfera presiona la tecla 'v' seguido\n"
			"de la tecla Enter; pero, si lo que deseas es calcular el área de un cuadrado\n"
			"u rectángulo, presiona la tecla 'a' seguido de la tecla Enter.\n";
		cin >> respuesta;
		system("CLS");
	} while (respuesta != "v" && respuesta != "V" && respuesta != "a" && respuesta != "A");

	if (respuesta == "v" || respuesta == "V") {
		// Calculo del volumen de la esfera.

		string respuesta;
		do {
			cout << "¡Vamos a calcular el volumen de una esfera!" << endl << endl;
			cout << "para calcularlo necesito saber el valor del diámetro o radio de la esfera" << endl;
			cout << "Presiona la tecla 'd' para usar el diámetro o la tecla 'r' para usar el radio" << endl;
			cout << "seguido de la tecla Enter para confirmar." << endl;
			cin >> respuesta;
			system("CLS");
		} while (respuesta != "d" && respuesta != "r" && respuesta != "D" && respuesta != "R");

		if (respuesta == "d" || respuesta == "D") {
			cout << "¿Cuál es la longitud del diámetro de la esfera?" << endl;
			cin >> radio;
			radio = radio / 2;
		}

		else {
			cout << "¿Cuál es la longitud del radio de la esfera?" << endl;
			cin >> radio;
		}

		cout << " La esfera de radio " << radio << " cm y cuyo diámetro es de: " << radio * 2 << " cm \n"
			"tiene un volumen de: " << volumenesfera(radio) << " cm cúbicos " << endl << endl;

	}

	else {
		do {
			cout << "¡Vamos a calcular el área de un cuadrado u rectángulo" << endl;
				cout << "para calcular el área de un cuadrado presiona la tecla 'c', pero si quieres\n"
				"puedes calcular el área de un rectángulo presionando la tecla 'r', seguido\n"
				"de la tecla Enter\n";
			cin >> respuesta;
			system("CLS");

			if (respuesta == "c" || respuesta == "C") {
				cout << "¿Cuanto mide el lado del cuadrado?" << endl;
				cin >> base;
				cout << "El area del cuadrado es de: " << area(base) << " cm cuadrados\n\n";

			}

			else {
				cout << "¿Cuánto mide la base b del rectángulo?" << endl;
				cin >> base;
				cout << "¿Cuánto mide la altura h del rectángulo?" << endl;
				cin >> altura;
				cout << "El área del rectángulo es de: " << arearectangulo(base, altura) << " cm cuadrados\n\n";
			}
		} while (respuesta != "c" && respuesta != "C" && respuesta != "r" && respuesta != "R");
	}

	system("pause");
	return 0;
}


