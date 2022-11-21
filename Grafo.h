#ifndef GRAFO_H
#define GRAFO_H

#include "Vertice.h"
// #include "Vertice.cpp"
// #include "Aresta.h"

#include <iostream>
using std::cout;

#include <algorithm>

/*
* OK Usar, a principio, classes Grafo e Vertice
*    A lista de adjacencia vai guardar o ID de cada grafo
*    VERGREgerervre
*/

class Grafo{
private:
    int numVertices;  // tamanho
    bool direcionado; // aresta tem origem e destino
    bool ponderado;   // aresta tem peso

    vector< int > *listaAdj;      // vetor de ponteiros, cada um apontando para um vetor de vertices
    vector< float > *pesosAdj;    // vetor de pesos


public:
    Grafo( );
    Grafo( int );

    bool checarAresta( int origem, int destino );
    void setAresta( int, int);
    void setAresta( int, int, float); // overload: faz aresta ponderada.
    void removeAresta( int origem, int destino );

    void trocaDirecionado ( );
    void trocaPonderado ( );

    void getListaAdj( );
};

#endif