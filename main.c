#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	
	Lista* lst;			/* declara ma lista não inicializada */
	
	lst = lst_cria();	/* cria e inicializa lista como vazia*/
	
	lst = lst_insere(lst, 23);		
	
	lst = lst_insere(lst, 45);
	
	lst_imprime(lst);
	
	system("pause");
	return 0;
	
}
