#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no_arv{
	char string[1000100];
	struct no_arv* prox_d;
	struct no_arv* prox_e;

}no_arv;
no_arv * Percorre(no_arv * Arvo, char String[1000100],int * cont){
	if (Arvo == NULL){
      	Arvo = (no_arv * ) malloc(sizeof(no_arv));
        Arvo->prox_d = NULL;
        Arvo->prox_e = NULL;
        strcpy((*Arvo).string, String);
        ++(*cont);
    }
     else if (strcmp(Arvo->string, String) < 0){
        (*Arvo).prox_d = Percorre((*Arvo).prox_d,String,cont);
    }
    else if (strcmp(Arvo->string, String) > 0){
        (*Arvo).prox_e = Percorre((*Arvo).prox_e, String,cont);
    }
    return Arvo;

}
int main() {
	no_arv* arvore = NULL;
	int cont = 0;
	char String[1000100];
	while(scanf("%s", String) != EOF){
		arvore = Percorre(arvore,String,&cont);
	}
	printf("%d\n", cont);
	return 0;
}