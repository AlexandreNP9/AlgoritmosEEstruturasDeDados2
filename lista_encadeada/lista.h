#pragma once

typedef struct {
    int dado;
    struct noh* prox;
} noh;

typedef struct {
    noh* primeiro;
    noh* ultimo;
    int tam;
} lista;

lista* lst_criar();
void lst_inserirfim(lista* l, int dado);
void lst_imprimir (lista* l);
void lst_destruir (lista* l);