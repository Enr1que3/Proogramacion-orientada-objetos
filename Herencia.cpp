//hrencia en POO

#include <iostream>
using namespace std;

class Persona {
private:
	int edad;
	string nombre;
public:
	Persona(int, string);//constructor
	void mostrarPersona();
};
//crear una herencia
class Alumno :public Persona {
private:
	string codigo;
	float notaFinal;
public:
	Alumno(int, string, string, float);//constructor de alumno
	void mostrarAlumno();
};

Alumno::Alumno(int edad, string nombre, string codigo, float notaFinal) : Persona(edad, nombre) {
	this->codigo = codigo;
	this->notaFinal = notaFinal;
}
// fin de la herencia

//constructor de la clase padre
Persona::Persona(int edad, string nombre) {
	this->edad = edad;
	this->nombre = nombre;
}

void Persona::mostrarPersona() {
	cout << "Edad: " << edad;
	cout << " Nombre: " << nombre << ", ";
}


void Alumno::mostrarAlumno() {
	mostrarPersona();
	cout << " Codigo del alumno: " << codigo;
	cout << " Nota final: " << notaFinal;

}
int main() {

	Alumno alumno(20, " Maria", " 73983 ", 82.7);
	alumno.mostrarAlumno();

	return 0;
}
