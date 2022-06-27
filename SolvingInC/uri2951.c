#include <stdio.h>
#include <stdlib.h>

typedef struct lista_nome{
	char Runa;
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
lista_nome* cria_elem(char Runa,int Dado){
	lista_nome* e = (lista_nome*)malloc(sizeof(lista_nome));
	if(e){
		e->Runa = Runa;
		e->Dado = Dado;
		e->prox = NULL;
		return e;
	}
	return NULL;
}
void mostra_lista(lista_nome** Lista,char Runa,int* cont){
	lista_nome* aux1 = NULL;
	if(Lista){
		aux1 = (*Lista);
		if(aux1){
			while(aux1 != NULL){
				if(aux1->Runa == Runa){
					(*cont) = (*cont) + aux1->Dado;
					break;
				}
				aux1 = aux1->prox;
			}
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
	long long int N,G;
	int V,cont = 0;
	char R;
	lista_nome* e = NULL;
	lista_nome* listin = NULL;
	scanf("%lld %lld",&N,&G);
	getchar();
	while((--N) >= 0){
		scanf("%c %d",&R,&V);
		getchar();
		e = cria_elem(R,V);
		cria_lista(&listin,e);
	}
	scanf("%lld",&N);
	getchar();
	while((--N) >= 0){
		scanf("%c",&R);
		getchar();
		mostra_lista(&listin,R,&cont);
	}
	printf("%d\n",cont);
	if(cont >= G){
		printf("You shall pass!\n");
	}
	else{
		printf("My precioooous\n");
	}
	

	return 0;
}