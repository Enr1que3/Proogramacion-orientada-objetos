#include <iostream>
using namespace std;

class Persona {
	private:
		int edad;
		double telefono;
		string nombre;
	public:
		Persona(int, double, string);
		void mostrarPersona();
		
};

//constuctor de la clase Persona(padre)
Persona::Persona(int edad, double telefono, string nombre) {
	this->edad = edad;
	this->telefono = telefono;
	this->nombre = nombre;
}

class Cliente:public Persona 
{
	private:
		int credito;
	public:
		Cliente(int,double,string,int);
		void mostrarCredito();

};

Cliente::Cliente(int edad, double telefono, string nombre, int credito) : Persona(edad, telefono, nombre) {
	this->credito = credito;

}

class Trabajador : public Persona{
	private:
		int salario;
	public:
		Trabajador(int, double, string, int);
		void mostrarSalario();
};

Trabajador::Trabajador(int edad, double telefono, string nombre, int saladio) : Persona(edad, telefono, nombre) {
	this->salario = salario;
}


void Persona::mostrarPersona() {
	cout << "Edad: " << edad;
	cout << " Telefono: " << telefono;
	cout << " Nombre: " << nombre << endl;
}
void Cliente::mostrarCredito() {
	mostrarPersona();
	cout << " Cretdio: "<<credito << endl;
}

void Trabajador::mostrarSalario() {
	mostrarPersona();
	cout << " Salario $: " << salario<<endl;
}


int main() {
	cout << "***** Datos de la persona *****" << endl;

	Persona persona(33, 78645, "Pedro");
	persona.mostrarPersona();

	cout << "***** Datos de la cliente *****" << endl;
	Cliente cliente = Cliente(22,1246,"maria",1500);
	cliente.mostrarCredito();

	cout << "***** Datos de la Trabajador *****" << endl;
	Trabajador trabajador(23,79313,"Julio",500);

	trabajador.mostrarSalario();

	
	return 0;
}