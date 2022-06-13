// Ryan Gonçalves Souza Araújo 508281
#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H

#include "Node.h"

class SparseMatrix{
    private:
        int linhas;
        int colunas;
        Node *head;
        int quantNodes;
    public:
        SparseMatrix(int m, int n);

        ~SparseMatrix();

        void insert(int i, int j, double value);

        double get(int i, int j);

        void print();
};

#endif