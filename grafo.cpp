#include "Grafo.h"

Grafo::Grafo( )
: numVertices( 10 ){
    
}

Grafo::Grafo( int numVertices ){
    this->numVertices = numVertices;

    for (int i=0; i<numVertices; i++){
        vector< Aresta > a;
        listaAdj.push_back( a );
    }
}

Grafo::insereAresta( string origem, string destino, float peso ){

    listaAdj[origem].push_back( destino );
}