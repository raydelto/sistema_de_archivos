#include "Arbol.h"

int main()
{
    Nodo* raiz = new Nodo("\\");
    Nodo *musica = new Nodo("Musica");
    Nodo *documentos = new Nodo("Documentos");
    Nodo *fotos = new Nodo("Fotos");

    raiz->AgregarHijo(musica);
    raiz->AgregarHijo(documentos);
    raiz->AgregarHijo(fotos);

    Nodo *merengue = new Nodo("merengue");
    Nodo *bachata = new Nodo("bachata");
    Nodo *reggaeton = new Nodo("reggaeton");

    musica->AgregarHijo(merengue);
    musica->AgregarHijo(bachata);
    musica->AgregarHijo(reggaeton);

    
    Nodo *escuela = new Nodo("escuela");
    Nodo *trabajo = new Nodo("trabajo");

    documentos->AgregarHijo(escuela);
    documentos->AgregarHijo(trabajo);

    
    Nodo *paisajes = new Nodo("paisajes");
    Nodo *comida = new Nodo("comida");
    Nodo *viajes = new Nodo("viajes");

    fotos->AgregarHijo(paisajes);
    fotos->AgregarHijo(comida);
    fotos->AgregarHijo(viajes);


    Arbol* arbol = new Arbol(raiz);
    arbol->Recorrer();

    return 0;
}