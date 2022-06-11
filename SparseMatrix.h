#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H
#include "Node.h"

class SparseMatrix {
    private:
        int linhas;
        int colunas;
        int nonZeros;
        Node *head;
    public:
        SparseMatrix(int m, int n); // checar se m,n é valido, se nao for, retornar erro

        ~SparseMatrix();

        void insert(int i, int j, double value); // checar se i,j é valido, se nao for, retornar erro

        double get(int i, int j); // checar se i,j é valido, se nao for, retornar erro

        void print();
};

#endif