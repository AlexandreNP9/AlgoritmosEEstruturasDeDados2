#include "lista.h"

int main(){
    lista* l;
    l = lista_criar();
    lst_inserirfim(l, 5);
    lst_inserirfim(l, 10);
    lst_inserirfim(l, 15);
    lst_imprimir(l);

    return 0;

}