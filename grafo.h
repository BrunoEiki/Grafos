#ifndef GRAFO_H
#define GRAFO_H

#include "Vertice.h"
#include "Aresta.h"

class Grafo{
private:
    int numVertices; // tamanho
// Lista de Adjacencia
    vector< vector< *Aresta > > listaAdj;

public:
    Grafo( );
    Grafo( int );

    insereAresta( Vertice, float );
};

#endif