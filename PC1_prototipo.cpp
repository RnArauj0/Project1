#include<iostream>
#include<string>
#include<functional>

using namespace std;

template<class General>

class Nodo {
public:
	General element;
	Nodo<General>* sig;
	
	Nodo(General e) {
		element = e;
		sig = nullptr;
		
	}
};
template<class General>

class Lista {
	Nodo<General>* inicio;
	Nodo<General>* fin;
	size_t cantidad;
public:
	Lista() {
		inicio = nullptr;
		cantidad = 0;
	}
	/*void push_front(General e) {
		Nodo<General>* n = new Nodo<General>(e);
		if (cantidad == )
			inicio = n;
		else {
			n->sig = inicio;
			inicio = n;
		}++cantidad;
	}*/
	void push_back_lineal(General elem) {
		Nodo<General>* nuevo = new Nodo<General>(elem);
		if (cantidad == 0)
			inicio = nuevo;
		else {
			Nodo<General>* aux = inicio;
			while (aux->sig != nullptr) {
				aux = aux->sig;
				aux->sig = nuevo;
			}
		}
		cantidad++;
	}

	/*void push_back_l(General elem) {
		Nodo<General>* nuevo = new Nodo<General>(elem);
		if (cantidad == 0) {
			inicio = nuevo;
			fin = nuevo;
		}
		else {
			fin->sig = nuevo;
			fin = nuevo;
		}cantidad++;
	}*/
	void print(function<void(General)>imprime) {
		Nodo<General>* aux = inicio;
		while (aux->sig != nullptr) {
			imprime(aux->element);
			aux = aux->sig;
		}
		imprime(aux->element);
		cout << endl;
	}
};

class usuarios {
	typedef unsigned short us;
	string nombre;
	string apellido;
	us movil;
public:
	usuarios(string nombre = " ",string apellido = " ",us movil =' ') :nombre(nombre),
		apellido(apellido),movil(movil){ }
	string getNombre() { return nombre; }
	string getApellido() { return apellido; }
	us getMovil() { return movil; }
	string toString() { return nombre + "-" + apellido + "-" + std::to_string(movil); }

};

int main() {
	Lista<int>t;
	
	Lista<usuarios> lista_Usuarios;
	char opcion;
	string nombre, apellido;
	unsigned int movil;
    do{
		cout << "Digite su nombre: ";
		cin >> nombre;
		cout << "Digite su apellido: ";
		cin >> apellido;
		cout << "Para poder contactarnos, necesitamos tu numero: ";
		cin >> movil;
		lista_Usuarios.push_back_lineal(usuarios(nombre,apellido,movil));
		cout << "desea continuar ? ";
		cin >> opcion;
	} while (opcion=='S');

	lista_Usuarios.print([](usuarios u) {cout << u.toString() << endl; });

	return 0;
	
}
/*void push_back(Generico g){
Nodo<Generico>* nuevo=new Nodo<Generico>(elemento)
if(cantidad==0)
 inicio=fin=nuevo;
}
else{
 Fin->sig=nuevo;
 Nuevo->ant=fin;
 Fin=nuevo;
}

cantidad++;

void push_front(Generico g){
 Nodo<Generico>* nuevo=new Nodo<Generico>
 if(cantidad==0){
 Inicio=nuevo;
 fin=nuevo;
 }
else{
 Nuevo->sig=inicio;
 Inicio->ant=nuevo;
 Inicio=nuevo}
}*/