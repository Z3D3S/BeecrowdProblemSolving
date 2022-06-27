#include <stdio.h>
#include <stdlib.h>

typedef struct lst_int{
	int Dado;
	struct lst_int* prox;
	struct lst_int* ant;
}lst_int;
lst_int* cria_elem(int Dado,lst_int* PROX,lst_int* ANT){
	lst_int* Estrutura = NULL;
	Estrutura = malloc(sizeof(lst_int));
	if(Estrutura){
		(Estrutura)->Dado = Dado;
        (Estrutura)->prox = PROX;
        (Estrutura)->ant = ANT;
        return Estrutura;
    }
    return NULL;
}
void insere_f(lst_int** ptr_lista,lst_int* e,int j){
	lst_int* aux1 = NULL;
	lst_int* aux2 = NULL;
	int Conquer = 0;
	if(ptr_lista){
		if(e){
			aux1 = (*ptr_lista);
			if((*ptr_lista) == NULL){
				(*ptr_lista) = e;
				e->prox = NULL;
			}
			else{
				while(aux1 != NULL){
					aux2 = aux1;
					aux1 = aux1->prox;
					++Conquer;
				}
				aux2->prox = e;
				e->prox = NULL;
				Conquer = Conquer-j;
				if(j != 0&&Conquer == 0){
					e->ant = (*ptr_lista);
				}
				else if(j != 0){
					aux1 = (*ptr_lista);
					while(aux1 != NULL&&Conquer){
						aux1 = aux1->prox;
						--Conquer;
					}
					e->ant = aux1;
				}
			}
		}
	}	
}
void Mostra_lista(lst_int** ptr_lista){
	lst_int* aux1 = NULL;
	if(ptr_lista){
		if(*ptr_lista){
			aux1 = (*ptr_lista);
			while(aux1 != NULL){
				printf("%d",aux1->Dado);
				if(aux1->prox != NULL){
					printf(" ");
				}
				aux1 = aux1->prox;
			}
		}
	}
	printf("\n");
}
void finaliza(lst_int **ptr_lista){
    lst_int* aux1 = NULL;
    aux1 = (*ptr_lista);
    if(aux1 != NULL){
        finaliza(&aux1->prox);
    }
    free(aux1);
}
int main() {
	int N,M,k,h,X,i,j,vetor[1010],aux1,aux2,maiorcomp,menorcomp;
	lst_int* Lista;
	lst_int* elel;
	scanf("%d",&N);
	for(i = 0;i < N;++i){
		Lista = NULL;
		elel = NULL;
		scanf("%d",&M);
		k = 0;
		for(j = 0;j < M;++j){
			scanf("%d",&X);
			if(X % 2 != 0){
				vetor[k] = X;
				++k;
			}
		}
		for(h = k/2; h >= 0;--h){
			maiorcomp = -1;
			menorcomp = 10000000;
			for(j = 0; j < k;++j){
				if(vetor[j] != 0){
					if(vetor[j] > maiorcomp){
						maiorcomp = vetor[j];
						aux1 = j;
					}
					if(vetor[j] < menorcomp){
						menorcomp = vetor[j];
						aux2 = j;
					}
				}
			}
			vetor[aux1] = 0;
			vetor[aux2] = 0;
			if(maiorcomp != -1&&menorcomp != 10000000){
				elel = cria_elem(maiorcomp,NULL,NULL);
				insere_f(&Lista,elel,0);
				if(menorcomp != maiorcomp){
					elel = cria_elem(menorcomp,NULL,NULL);
					insere_f(&Lista,elel,1);
				}
			}
		}
		Mostra_lista(&Lista);
		if(Lista){
			finaliza(&Lista);
		}
	}
	return 0;
}