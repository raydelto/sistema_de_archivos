#pragma once

#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    void AgregarHijo(Nodo *hijo);
    void SetSiguiente(Nodo *siguiente) { _siguiente = siguiente; }
    Nodo *GetSiguiente() { return _siguiente; }
    Nodo *GetPrimerHijo() { return _primerHijo; }
    std::string GetNombre() { return _nombre; }
    size_t GetNivel() { return _nivel; }

private:
    std::string _nombre;
    Nodo *_primerHijo;
    Nodo *_ultimoHijo;
    Nodo *_siguiente;
    size_t _nivel;
};