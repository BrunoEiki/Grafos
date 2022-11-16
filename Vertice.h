#ifndef VERTICE_H
#define VERTICE_H

#include <string>
using std::string;

#include <vector>
using std::vector;

// Talvez seja desnecessário.

class Vertice{
private:
    int id;                    
    Vertice *predecessor;        // melhor usar ponteiros para objetos que usam muito memoria
    
public:
// CONSTRUTORES
    Vertice( int );        // apenas com id
    // Vertice( string );  // apresenta rotulo, como "Tokyo" ou "Belem"
    ~Vertice( );           // destrutor

// METODOS
    int getId( );
    void setPredecessor( Vertice* );  // Assim que faz para armazenar endereço do vértice no vector?

// SOBRECARGA
    // Vertice operator=( const Vertice & );

};

#endif