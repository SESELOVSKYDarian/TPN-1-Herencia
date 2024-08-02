#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string, int);
    void mostrarPersona();
};

class Trabajador : public Persona {
private:
    string cuil;
    string titulo;
public:
	Trabajador(string, int, string, string);
    void mostrarTrabajador();
};

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

Trabajador::Trabajador(string _nombre, int _edad, string _cuil, string _titulo) 
    : Persona(_nombre, _edad) {
    cuil = _cuil;
    titulo = _titulo;
}

void Persona::mostrarPersona() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Trabajador::mostrarTrabajador() {
    mostrarPersona();
    cout << "Cuil: " << cuil << endl;
    cout << "Titulo: " << titulo << endl;
}

int main() {
    Trabajador trabajador1("Silvana", 38, "9038130948", "matematica");
    trabajador1.mostrarTrabajador();
    cout << "------------------------------------------------" << endl;
    Trabajador trabajador2("Jeremias", 37, "19023849023", "lenguaje");
    trabajador2.mostrarTrabajador();
    return 0;
}
