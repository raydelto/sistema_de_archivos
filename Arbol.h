#pragma once
#include "Nodo.h"

class Arbol
{
public:
    Arbol(Nodo *raiz);
    void Recorrer();

private:
    void Recorrer(Nodo *nodo);
    Nodo *_raiz;
};