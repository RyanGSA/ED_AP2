// Ryan Gonçalves Souza Araújo 508281
#include <iostream>
#include "Node.h"
#include "SparseMatrix.h"

int main(){
    
    SparseMatrix *matriz = new SparseMatrix(3,3);
    matriz->print();

    return 0;
}
