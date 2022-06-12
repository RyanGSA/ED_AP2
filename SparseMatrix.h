#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H
#include "Node.h"

class SparseMatrix {
    private:
        int linhas;
        int colunas;
        Node *head;
    public:
        SparseMatrix(int m, int n){
            linhas = m;
            colunas = n;
        }

        ~SparseMatrix(){
            
        }

        void insert(int i, int j, double value){
            if(i>linhas || j>colunas){
                std::cout << "Erro: posicao invalida" << std::endl;
                return;
            }
            else{

            }
        }

        double get(int i, int j){
            if(i>linhas || j>colunas){
                std::cout << "Erro: posicao invalida" << std::endl;
                return;
            }
            else{

            }
        }

        void print(){
            for(int i=0; i<linhas; i++){
                for(int j=0; j<colunas; j++){
                    std::cout << get(i,j) << " ";
                }
                std::cout << std::endl;
            }
        }
};

#endif