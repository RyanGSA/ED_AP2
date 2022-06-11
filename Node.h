#ifndef NODE_H
#define NODE_H

struct Node {
    double valor;
    int coluna;
    int linha;
    Node *direita;
    Node *abaixo;
};

#endif