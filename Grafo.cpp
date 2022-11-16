#include "Grafo.h"

Grafo::Grafo( )
: numVertices( 10 ), direcionado( 0 ), ponderado( 0 ) {
/*
* Inicializa lista de adjacencia
* Padrao eh nao-direcionado e nao-ponderado
*/
    listaAdj = new vector< int > [numVertices];
    pesosAdj = new vector< float > [numVertices];
}

Grafo::Grafo( int numVertices ){
    if ( numVertices < 1 ) {
        this->numVertices = 10;
    }
    else {
        this->numVertices = numVertices;
    }

    listaAdj = new vector< int > [numVertices];
    pesosAdj = new vector< float > [numVertices];
}

void Grafo::setAresta( int origem, int destino ){
    // indice de origem ou destino maior que a quantidade atual de vertices
    
    // aresta origem->destino ja existe
    // for ( Vertice v : listaAdj[origem] ) {
    //     if ( v.getId() == destino ) {
    //         std::cout << "dfwe";
    //     }
    // }

    listaAdj[origem].push_back(destino);
    pesosAdj[origem].push_back( 1.0 ); // Peso setado para 1. Aresta simples.
}

void Grafo::setAresta( int origem, int destino, float peso ){

    if ( peso < 1 ) {
        peso = 1.0;
    }

    listaAdj[origem].push_back(destino);
    pesosAdj[origem].push_back( peso );

}

void Grafo::removeAresta( int origem, int destino ) {
    if ( checarAresta( origem, destino ) ) {
        listaAdj[origem].erase(std::find( listaAdj[origem].begin( ), listaAdj[origem].end( ), destino));
    } else {
        std::cout << "Aresta inexiste no grafo!\n";
    }
}

bool Grafo::checarAresta( int origem, int destino ) {
    // ADICIONAR: modificar loop para ITERATOR
    for ( int i=0; i < listaAdj[origem].size(); i++ ) {
        if ( destino == listaAdj[origem][i] ) {
            return true;
        }
    }
    return false;
}

void Grafo::getListaAdj( ) {
    // ADICIONAR: mudar para ITERATOR depois
    for ( int i=0; i < numVertices; i++ ) {
        for ( int j=0; j < listaAdj[i].size( ); j++ ) {
            std::cout << "Origem: " << i << " Destino: " << listaAdj[i][j] << " Peso: " << pesosAdj[i][j] << "\n";
        }
    }
}