#include <stdio.h>
#include <math.h>

int main() {
	long long int N,X,i,Soma,aux,j;
	char String[10000];
	scanf("%lld",&N);
	++N;
	while(--N){
		scanf("%lld",&X);
		for(i = 0;pow(2,i) <= X;++i);
		String[i] = '\0';
		Soma = 0;
		for(i = i-1; i >= 0;--i){
			if(Soma + pow(2,i) <= X){
				Soma = Soma + pow(2,i);
				String[i] = '1';
			}
			else{
				String[i] = '0';
			}
		}
		for(i = 0,aux = 0,j = 0;String[i] != '\0';++i){
			if(aux < j){
				aux = j;
			}

			if(String[i] == '1'){
				++j;
			}
			else{
				j = 0;
			}
		}
		if(aux < j){
			aux = j;
		}
		printf("%lld\n",aux);
	}	
	
	return 0;
}