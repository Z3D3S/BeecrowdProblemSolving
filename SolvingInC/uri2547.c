#include <stdio.h>

int main() {
	int N,Amin,Amax,Pessoa,Cont;
	while(scanf("%d %d %d",&N,&Amin,&Amax) != EOF){
		++N;
		Cont = 0;
		while(--N){
			scanf("%d",&Pessoa);
			if(Pessoa>= Amin&&Pessoa <= Amax){
				++Cont;
			}
		}
		printf("%d\n",Cont);
	}
	return 0;
}