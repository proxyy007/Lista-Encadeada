#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista Lista;
	
	struct lista {
		int info;
		Lista*prox;
	};


Lista* lst_cria (void){
	
	return NULL;
}



/* inserção no inicio: retorna a lista atualizada */
Lista* lst_insere (Lista* lst, int val)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	novo->info = val;
	novo->prox = lst;
	return novo;
}


/* função imprime: imprime os valores dos elementos*/
void lst_imprime (Lista* lst){
	
	Lista*p;
	for (p = lst; p!=NULL; p = p->prox){
		
		printf("info = %d\n", p->info);
	}
	
}


/* verifica se a lista está vazia*/
int lst_vazia (Lista*lst){
	
	return (lst == NULL);
}


/*Função busca elemento na lista*/

//Lista* busca (Lista*lst, int v)

