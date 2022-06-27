#include <stdio.h>
#include <stdlib.h>
#define Tamanho 1000000
typedef struct t_grafo{
	int eh_ponderado;
	int nro_vertices;
	int** arestas;
	float** pesos;
	int* grau;
}t_grafo;
t_grafo* cria_Grafo(int nro_vertices,int eh_ponderado){
	t_grafo* gr = (t_grafo*) malloc(sizeof(struct t_grafo));
	if(gr != NULL){
		int i;
		gr->nro_vertices = nro_vertices;
		gr->eh_ponderado = (eh_ponderado != 0) ? 1:0;
		gr->grau = (int*)calloc(nro_vertices,sizeof(int));
		gr->arestas = (int**)malloc(nro_vertices*sizeof(int*));
		for(i = 0; i < nro_vertices;++i){
			gr->arestas[i] = (int*)malloc(sizeof(int));
		}
		if(gr->eh_ponderado){
			gr->pesos = (float**)malloc(nro_vertices*sizeof(float*));
			for(i = 0;i<nro_vertices;++i){
				gr->pesos[i] = (float*)malloc(sizeof(float));
			}
		}
	}
	return gr;
}
void libera_grafo(t_grafo* gr){
	if(gr != NULL){
		int i;
		for(i = 0;i < gr->nro_vertices;++i){
			free(gr->arestas[i]);
		}
		free(gr->arestas);
		if(gr->eh_ponderado){
			for(i = 0;i < gr->nro_vertices;++i){
				free(gr->pesos[i]);
			}
			free(gr->pesos);
		}
		free(gr->grau);
		free(gr);
	}
}
int insereAresta(t_grafo* gr,int orig,int dest,int eh_digrafo,float peso){
	if(gr == NULL){
		return 0;
	}
	if(orig < 0||orig >= gr->nro_vertices){
		return 0;
	}
	if(dest < 0||dest >= gr->nro_vertices){
		return 0;
	}
	gr->arestas[orig][gr->grau[orig]] = dest;
	if(gr->eh_ponderado){
		gr->pesos[orig][gr->grau[orig]] = peso;
		gr->grau[orig]++;
	}
	if(eh_digrafo == 0){
		insereAresta(gr,dest,orig,1,peso);
	}
	return 1;
}
int procuramenordistancia(double *dist,int* visitado,int NV){
	int i,menor = -1,primeiro = 1;
	for(i = 0; i < NV;++i){
		if(dist[i] >= 0&&visitado[i] == 0){
			if(primeiro){
				menor = i;
				primeiro = 0;
			}
			else{
				if(dist[menor] > dist[i]){
					menor = i;
				}
			}
		}
	}
	return menor;
}
void menorcaminho_grafo(t_grafo* gr,int ini,double *dist){
	int i,cont,NV,ind,*visitado,u;
	cont = NV = gr->nro_vertices;
	visitado = (int*) malloc(NV*sizeof(int));
	for(i = 0;i < NV;++i){
		dist[i] = -1;
		visitado[i] = 0;
	}
	dist[ini] = 0;
	while(cont > 0){
		u = procuramenordistancia(dist,visitado,NV);
		if(u == -1){
			break;
		}
		visitado[u] = 1;
		cont--;
	for(i =0;i < gr->grau[u];i++){
		ind = gr->arestas[u][i];
		if(dist[ind] < 0){
			dist[ind] = dist[u] + gr->pesos[u][i];
		}
		else{
			if(dist[ind] > dist[u] + gr->pesos[u][i]){
				dist[ind] = dist[u] + gr->pesos[u][i];
			}
		}
	}
	}
	free(visitado);
}
int main() {
	int i,N,k,comp,cont,destino[2];
	float X;
	double dist[Tamanho],menor,origem[2],final[2];
	t_grafo* grafin;
	while(scanf("%d",&N) != EOF){
		grafin = NULL;
		for(i = 0;i < 2;++i){
			scanf("%lf",&origem[i]);
		}
		grafin = cria_Grafo(2*(N+1),1);
		cont = 0;	
		for(i = 0;i < N;++i){
			scanf("%f",&X);
			insereAresta(grafin,i,i+1,1,X);
		}
		destino[cont] = i;
		++cont;
		for(i = 0;i < N;++i){
			scanf("%f",&X);
			insereAresta(grafin,i+N+1,i+N+2,1,X);
		}
		destino[cont] = i+N+1;
		for(i = 0;i < N-1;++i){
			scanf("%f",&X);
			insereAresta(grafin,i+1,i+N+2,1,X);
		}
		for(i = 0;i < N-1;++i){
			scanf("%f",&X);
			insereAresta(grafin,i+N+2,i+1,1,X);
		}
		for(i = 0;i < 2;++i){
			scanf("%lf",&final[i]);
		}
		menor = 1000000000;
		for(k = 0;k < 2;++k){
			menorcaminho_grafo(grafin,(k*(N+1)),dist);
			for(i = 0; i < 2;++i){
				if(dist[destino[i]] >= 0){
					comp = dist[destino[i]]+final[i]+origem[k];
				}
				if(menor > comp){
					menor = comp;
				}
			}
		}
		libera_grafo(grafin);
		printf("%.0lf\n",menor);
	}
	return 0;
}