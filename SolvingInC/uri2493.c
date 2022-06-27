#include <stdio.h>

int main() {
	int T,Numero_Linha[51],j,i,Taux,Taux2,k,kaux,l,q,e,eaux,Comparador,Comparadoraux1,Comparadoraux2;
	long long int X[51],Y[51],Z[51];
	char Nome[51][50],Operador[51],Nomeaux[51][50],Auxx[50];
	while(scanf("%d",&T) != EOF){
		Comparador = T;
		Comparadoraux1 = 0;
		Comparadoraux2 = 0;
		Taux = T;
		Taux2 = T;
		i = 1;
		while(T != 0){
			scanf("%lld %lld=%lld",&X[i],&Y[i],&Z[i]);
			++i;
			--T;
		}
		j = 1;
		while(Taux != 0){
			scanf("%s %d %c",Nome[j],&Numero_Linha[j],&Operador[j]);
			++j;
			--Taux;
		}
		j = 1;
		k = 0;
		while(Taux2 != 0){
			if(Operador[j] == '+'){
				if((X[Numero_Linha[j]]+Y[Numero_Linha[j]]) != Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] = Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else{
					++Comparadoraux2;
				}
			}
			else if(Operador[j] == '-'){
				if((X[Numero_Linha[j]]-Y[Numero_Linha[j]]) != Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] = Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else{
					++Comparadoraux2;
				}	
			}
			else if(Operador[j] == '*'){
				if((X[Numero_Linha[j]]*Y[Numero_Linha[j]]) != Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] = Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else{
					++Comparadoraux2;
				}
			}
			else if(Operador[j] == 'I'){
				if((X[Numero_Linha[j]]*Y[Numero_Linha[j]]) == Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] =	 Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else if((X[Numero_Linha[j]]+Y[Numero_Linha[j]]) == Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] = Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else if((X[Numero_Linha[j]]-Y[Numero_Linha[j]]) == Z[Numero_Linha[j]]){
					for(l=0;Nome[j][l] != '\0';++l){
						Nomeaux[k][l] = Nome[j][l];
					}
					Nomeaux[k][l] = '\0';
					++k;
					++Comparadoraux1;
				}
				else{
					++Comparadoraux2;
				}

			}
			++j;
			--Taux2;
		}
		kaux = k;
		for(k = 0,e=0; k < kaux;++k){
			for(q=k+1;q < kaux;++q){
				for(l=0;Nomeaux[k][l] != '\0'&&Nomeaux[q][l] != '\0';++l){
					if(Nomeaux[k][l] > Nomeaux[q][l]){
						for(l=0;Nomeaux[q][l] != '\0'||Nomeaux[k][l] != '\0';++l){
							Auxx[l] = Nomeaux[k][l];
							Nomeaux[k][l] = Nomeaux[q][l];
							Nomeaux[q][l] = Auxx[l];
						}
						break;
					}
					else if(Nomeaux[k][l] < Nomeaux[q][l]){
						break;
					}
				}
			}
			++e;
		}
		eaux = e;
		if(Comparador != Comparadoraux2&&Comparador != Comparadoraux1){
			for(e = 0;e< eaux ;++e){
				printf("%s",Nomeaux[e]);
				if(e+1 < eaux){
					printf(" ");
				}
			}
			printf("\n");
		}
		else if(Comparador == Comparadoraux1){
			printf("None Shall Pass!\n");
		}
		else if(Comparador == Comparadoraux2){
			printf("You Shall All Pass!\n");
		}
	for(e = 0;e <eaux;++e){
		for(l=0;Nomeaux[e][l] != '\0';++l){
			Nomeaux[e][l] = '\0';
		}
	}
	}

	return 0;
}