#include <iostream>

#include "Grafo.h"
#include "Grafo.cpp"

int main(){
    Grafo grafo;
    grafo.setAresta(0, 1);
    grafo.setAresta(0, 2);
    grafo.setAresta( 1, 2, 4.5 );
    
    
    
    grafo.removeAresta( 0, 3 );
    grafo.getListaAdj( );
    // Implementar busca em profundidade
    
}