/*#include <iostream>
#include <functional>
#include <vector>
#include <string.h>
#include <string>

using namespace std;
using std::function;
using std::cout;
using std::endl;

class Local {
    string nombre; char tipo;
public:
    Local(string nombre = " ", char tipo = ' ') :nombre(nombre), tipo(tipo) {}
    string getNombre() { return nombre; }
    char getTipo() { return tipo; }
};
class Distrito {
    string nombre; vector<Local>arr_locales;
public:
    Distrito(string nombre = " ") :nombre(nombre) {}
    string getNombre() { return nombre; }
    void insertar(Local a) { arr_locales.push_back(a); }
    Local getLocal(short i, std::function<bool(Local)> condicion) {
        if (condicion(arr_locales[i])) { return arr_locales[i]; }
    }
    short getSize() { return arr_locales.size(); }
};
class Usuario {
    string nombre; Distrito domicilio; Local conrrecurrido;
public:
    Usuario(
        string nombre = " ", double ID = 0, Distrito domicilio = nullptr, Local conrrecurrido = nullptr
    ) :nombre(nombre), ID(ID), domicilio(domicilio), conrrecurrido(conrrecurrido)
    {}
    string getNombre() { return nombre; }
    double getID() { return ID; }
    Distrito getDomicilio() { return domicilio; }
    Local getConrrecurrido(std::function<bool(Local)> condicion) {
        if (condicion(arr_locales[i])) { return conrrecurrido; }
        else { return nullptr; }
    }
};
class ListaPedido {
    class Pedido {
    public:
        Usuario Pedidor; char tipo; Pedido* sig;
        Pedido( Usuario Pedidor = nullptr, char tipo = ' ') :Pedidor(Pedidor), tipo(tipo) {
            sig = nullptr;
        }
    };
    Pedido* inicio;
    size_t cantidad;

public:
    ListaPedido() { inicio = nullptr; cantidad = 0; }
    void Insertar(Usuario p, char t) {
        Pedido* n = new Pedido(p, t);
        if (cantidad == 0) { inicio = n; }
        else { n->sig = inicio; inicio = n; }
        ++cantidad;
    }

};
*/
//------------------clases---------------------
/* 
.Locales ------------->registra la cantidad y que locales está disponibles
.distritos ----------->para ver la lejanía de la ubicacion del usuario al restaurante
.usuario-------------->registra datos del usuario
.lista de pedidos----->registra el pedido que ordena el usuario
*/