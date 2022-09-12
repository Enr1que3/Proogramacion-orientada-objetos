// Ejericicio-08.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Persona {
    //atributos o caracteriticas 
    private:
        int edad;
        string nombre;
        int telefono;
        //metodos o acciones 
        //(se declaran funciones)
    public:
        Persona(int, string, int);//constructor

        void setEdad(int);//los setters reciben parametros
        int getEdad();//los getters no rebicen parametros
        void setTelefono(int);
        int getTelefono();
        void setNombre(string);
        string getNombre();

};
//constructor, sirver para inicializar los atributos
Persona::Persona(int, string,int) {

}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::setTelefono(int telefono) {
    this->telefono = telefono;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

//getters

int Persona::getEdad() {
    return edad;
}

int Persona::getTelefono() {
    return telefono;
}

string Persona::getNombre() {
    return nombre;
}

int main()
{
    /*Persona p1 = Persona(20, "Enrique");
    Persona p1(20, "Enrique");
    p1.correr();*/

    Persona persona = Persona(23,"Enrique", 246);
    
    persona.setEdad(30);
    persona.setNombre("Juan");
    persona.setTelefono(786379631);
    cout << "La edad es: " << persona.getEdad() << " con el nombre de : " << persona.getNombre() << " y su telefono es: " << persona.getTelefono() << endl;
    return 0;
}


