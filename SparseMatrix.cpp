// Ryan Gonçalves Souza Araújo 508281
#include <iostream>
#include "SparseMatrix.h"
#include "Node.h"

SparseMatrix::SparseMatrix(int m, int n){ //checar se m,n são validos
    this->linhas = m;
    this->colunas = n;
    this->head = NULL;
    this->quantNodes = 0;
    std::cout << "Criando matriz esparsa de " << m << "x" << n << std::endl;
}

SparseMatrix::~SparseMatrix(){
    std::cout << "Destruindo matriz esparsa" << std::endl;
       //gerado pelo copilot, necessario checar
    Node *aux = this->head;
    while(aux != NULL){
        Node *aux2 = aux;
        aux = aux->abaixo;
        delete aux2;
    } //gerado pelo copilot, necessario checar
}

void SparseMatrix::insert(int i, int j, double value){
    if(i>linhas || j>colunas){
        std::cout << "Erro: posicao invalida" << std::endl;
        return;
    }
    else{
        Node *newNode = new Node();
    }
}

double SparseMatrix::get(int i, int j){
    if(i>linhas || j>colunas){
        std::cout << "Erro: posicao invalida" << std::endl;
        return 0; //retornar 0 se posicao for invalida
    }
    else{
        return 0; //temporario
    }
}

void SparseMatrix::print(){
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            std::cout << get(i,j) << " ";
        }
        std::cout << std::endl;
    }
}