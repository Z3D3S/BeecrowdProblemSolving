#include <stdio.h>
int main() {
	int caqui,f,X = 1,Y = 0,V[10000];
	for(f = 0;X != Y;++f){
		scanf("%d",&X);
		scanf("%d",&Y);
		if(X == Y){
			V[f] = 2;
			break;
		}
		if(X > Y){
			V[f] = 1;
		}
		else{
			V[f] = 0;
		}
	}
	caqui = 1+f;
	for(f = 0;(f < caqui);++f){
		if(V[f] == 1&&V[f] != 2){
			printf("Decrescente\n");
		}
		if(V[f] == 0&&V[f] != 2){
			printf("Crescente\n");
		}
	}
    return 0;
}