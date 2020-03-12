# ifndef NODO_H
# define  NODO_H

struct nodo {
    int v;
    struct nodo * next;
};
typedef  struct nodo Nodo;

void  stampa (Nodo * head);

# endif
