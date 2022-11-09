#include "Vertice.h"

Vertice::Vertice( string id ){
    this->id = id;
    this->predecessor = nullptr;
}

Vertice::~Vertice( ){

}

void Vertice::novoPredecessor( Vertice* vertice ){
    predecessor = vertice;
}

// Vertice Vertice::operator=( const Vertice &vOther ){
//     this->id = vOther.id;
//     this->
// }


/*
Lista de Adjacência  [[v1, v2] , [v3], [v1]]
Peso está no objeto Aresta (apenas com destino)
*/