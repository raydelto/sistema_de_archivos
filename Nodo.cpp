#include "Nodo.h"

Nodo::Nodo(std::string nombre) : _nombre(nombre), _primerHijo(nullptr), _ultimoHijo(nullptr), _siguiente(nullptr), _nivel(0)
{
}

void Nodo::AgregarHijo(Nodo *hijo)
{
    hijo->_nivel = _nivel + 1;
    if (_primerHijo == nullptr) // Si la lista está vacía
    {
        _primerHijo = hijo;
        _ultimoHijo = hijo;
    }
    else
    {
        _ultimoHijo->SetSiguiente(hijo);
        _ultimoHijo = hijo;
    }
}
