#include<stdio.h>
int main(){
	int Variavel_Corretora,n,V[100000],Altura,i;
	scanf("%d",&n);
	for(i = 0;i < n;++i){
		scanf("%d",&Altura);
		V[i] = Altura;
	}
	if(n >= 3){
		for(i = 1;i < n-1;++i){
			if(V[i-1] < V[i]&&V[i]>V[i+1]){
				Variavel_Corretora = 0;
			}
			else if(V[i-1] >V[i]&&V[i] <V[i+1]){
				Variavel_Corretora = 0;
			}
			else{
				Variavel_Corretora = 1;
			}
		}
	}
	else if(n == 2){
		i = 0;
		if(V[i] > V[i+1]){
			Variavel_Corretora = 0;
		}
		else if(V[i] < V[i+1]){
			Variavel_Corretora = 0;
		}
		else{
			Variavel_Corretora = 1;
		}
	}
	if(n == 0||Variavel_Corretora == 1){
		printf("0\n");
	}
	else if(Variavel_Corretora == 0||n == 1) {
		printf("1\n");
	}
	return 0;
}

