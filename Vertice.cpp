#include "Vertice.h"

// CONSTRUTORES

Vertice::Vertice( int id ){
    this->id = id;
    this->predecessor = nullptr;
}

// Vertice::Vertice( string etiqueta ){
//     this->id = id;
//     this->predecessor = nullptr;
// }

Vertice::~Vertice( ){

}


/* METODOS */ 

void Vertice::setPredecessor( Vertice* vertice ){
    predecessor = vertice;
}

int Vertice::getId( ) {
    return id;
}

// Vertice Vertice::operator=( const Vertice &vOther ){
//     this->id = vOther.id;
//     this->
// }


/*
Lista de Adjacência  [[v1, v2] , [v3], [v1]]
Peso está no objeto Aresta (apenas com destino)
*/