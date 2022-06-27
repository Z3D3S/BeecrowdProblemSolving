#include <stdio.h>
#include <string.h>


int main() {
	int N,U,j,i,k,g,cont,paisaldo,T,aux;
	char String[60][60],Stringcomp[100];

	scanf("%d",&N);
	++N;
	while(--N){
		scanf("%d",&T);
		for(i = 0;i < T;++i){
		scanf("%s",String[i]);
		}
		scanf("%d",&U);
		for(j = 1; j <= U;++j){
			scanf("%s",Stringcomp);
			paisaldo = 0;
			for(i = 0;i < T;++i){
				for(k = 0;Stringcomp[k] != '\0';++k){
					if(Stringcomp[k] == String[i][0]){
						cont = 0;
						for (g = 0; String[i][g] != '\0'; ++g){
							if(Stringcomp[k+g] == String[i][g]){
								++cont;
							}
							else{
								break;
							}
						}
						aux = strlen(String[i]);
						if(((Stringcomp[k+g] >= '0'&&Stringcomp[k+g] <= '9')||(Stringcomp[k+g] >= 'a'&&Stringcomp[k+g] <= 'z'))&&cont == aux){
							++cont;
						}
						if(cont == aux){
							paisaldo = 1;
							break;
						}
					}
				}
				if(paisaldo){
					break;
				}
			}
			if(paisaldo){
				printf("Abortar\n");
			}
			else{
				printf("Prossiga\n");
			}
		}
		if(N > 1){
			printf("\n");
		}
	}
	

	return 0;
}