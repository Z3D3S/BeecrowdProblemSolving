#include <stdio.h>
int main() {
	int caqui,f,X = 1,Y = 1,V[10000];
	for(f = 0;X != 0&&Y != 0;++f){
		scanf("%d",&X);
		scanf("%d",&Y);
		if(X == 0||Y == 0){
			V[f] = 5;
			break;
		}
		else if(X > 0 && Y > 0){
			V[f] = 1;
		}
		else if(X > 0&& Y < 0){
			V[f] = 2;
		}
		else if(X < 0&& Y > 0){
			V[f] = 3;
		}
		else if(X < 0&& Y <  0){
			V[f] = 4;
		}
	}
	caqui = 1+f;
	for(f = 0;(f < caqui);++f){
		if(V[f] == 1&&V[f] != 5){
			printf("primeiro\n");
		}
		if(V[f] == 2&&V[f] != 5){
			printf("quarto\n");
		}
		if(V[f] == 4&&V[f] != 5){
			printf("terceiro\n");
		}
		if(V[f] == 3&&V[f] != 5){
			printf("segundo\n");
		}
	}
    return 0;
}