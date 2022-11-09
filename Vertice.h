#include <string>
using std::string;

#include <vector>
using std::vector;

// Talvez seja desnecessário.

class Vertice{
private:
    string id;                   // numeros possuem a mesma ordem, seja como int ou string
    Vertice *predecessor;        // melhor usar ponteiros para objetos que usam muito memoria
    
public:
    Vertice( string );
    ~Vertice( );
    
    string getId( );
    void novoPredecessor( Vertice* );  // Assim que faz para armazenar endereço do vértice no vector?

    // Vertice operator=( const Vertice & );

};