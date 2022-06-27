#include <stdio.h>
#include <stdlib.h>

typedef struct lista_nome{
	int Dado;
	struct lista_nome* prox;
}lista_nome;
void cria_lista(lista_nome** Lista,lista_nome* e){
	lista_nome* aux1 = NULL;
	lista_nome* aux2 = NULL;
	if(Lista){
		if(*Lista){
			aux1 = (*Lista);
			while(aux1 != NULL){
				if(aux1->Dado == e->Dado){
					return;
				}
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
lista_nome* cria_elem(int Dado){
	lista_nome* e = (lista_nome*)malloc(sizeof(lista_nome));
	if(e){
		e->Dado = Dado;
		e->prox = NULL;
		return e;
	}
	return NULL;
}
void mostra_lista(lista_nome** Lista,int* cont){
	lista_nome* aux1;
	aux1 = (*Lista);
	if(aux1){
		while(aux1 != NULL){
			aux1 = aux1->prox;
			++(*cont);
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
	int i,N,M,Dado,cont = 0;
	lista_nome* Listin = NULL;
	lista_nome* elel = NULL;
	scanf("%d",&N);
	scanf("%d",&M);
	for(i=0;i < M;++i){
		scanf("%d",&Dado);
		elel = cria_elem(Dado);
		cria_lista(&Listin,elel);
	}
	mostra_lista(&Listin,&cont);
	libera_lista(&Listin);
	printf("%d\n",(N-cont));
	return 0;
}