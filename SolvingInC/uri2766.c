#include <stdio.h>
#include <stdlib.h>

typedef struct lista_nome{
	char String[50];
	struct lista_nome* prox;
}lista_nome;
void cria_lista(lista_nome** Lista,lista_nome* e){
	lista_nome* aux1 = NULL;
	lista_nome* aux2 = NULL;
	if(Lista){
		if(*Lista){
			aux1 = (*Lista);
			while(aux1 != NULL){
				aux2 = aux1;
				aux1 = aux1->prox;
			}
			aux2->prox = e;
			e->prox = NULL;
		}
		else{
			(*Lista) = e;
			e->prox = NULL;
		}
	}
}
lista_nome* cria_elem(char String[50]){
	int i;
	lista_nome* e = (lista_nome*)malloc(sizeof(lista_nome));
	if(e){
		for(i = 0;String[i] != '\0';++i){
			e->String[i] = String[i];
		}
		e->String[i] = String[i];
		e->prox = NULL;
		return e;
	}
	return NULL;
}
void mostra_lista(lista_nome** Lista){
	lista_nome* aux1;
	int cont;
	aux1 = (*Lista);
	if(aux1){
		cont = 0;
		while(aux1 != NULL){
			if(cont == 2||cont == 6||cont == 8){
				printf("%s\n",aux1->String);
			}
			aux1 = aux1->prox;
			++cont;
		}
	}
}
void libera_lista(lista_nome** Lista){
	lista_nome* aux1;
	lista_nome* aux2;
	aux1 = (*Lista);
	if(aux1){
		while(aux1 != NULL){
			aux2 = aux1;
			aux1 = aux1->prox;
			free(aux2);
		}
	}
}
int main() {
	int N = 11;
	lista_nome* Listin = NULL;
	lista_nome* elel = NULL;
	char String[50];
	while(--N){
	scanf("%s",String);
	elel = cria_elem(String);
	cria_lista(&Listin,elel);
	}
	mostra_lista(&Listin);
	libera_lista(&Listin);
	free(Listin);
	free(elel);
	

	return 0;
}