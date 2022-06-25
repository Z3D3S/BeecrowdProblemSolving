#include<stdio.h>

int main(){
	int N = 1,Nota1,Nota2,Nota3,Nota4,Nota5,Nota6,M = 1,Troco;
	Nota1 = 2, Nota2 = 5 , Nota3 = 10, Nota4 = 20,Nota5 = 50,Nota6 = 100;
	while(N != 0 && M != 0){
		scanf("%d %d",&N,&M);
		Troco = M-N;
		if(Troco-Nota1-Nota1 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota1-Nota2 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota1-Nota3 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota1-Nota4 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota1-Nota5 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota1-Nota6 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota2-Nota2 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota2-Nota3 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota2-Nota4 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota2-Nota5 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota2-Nota6 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota3-Nota3 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota3-Nota4 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota3-Nota5 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota3-Nota6 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota4-Nota4 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota4-Nota5 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota4-Nota6 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota5-Nota5 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota5-Nota6 == 0){
			printf("possible\n");
		}
		else if(Troco-Nota6-Nota6 == 0){
			printf("possible\n");
		}
		else{
			if(M != 0&&N != 0){
				printf("impossible\n");
			}
		}
	}

	return 0;
}