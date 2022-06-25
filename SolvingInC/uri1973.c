#include <stdio.h>

int main(){
	unsigned long long int Vaquinhas = 0,j = 0,i,Estrelas[1000000],Cont;
	scanf("%llu",&Cont);
	for(i = 0;i < Cont;++i){
		scanf("%llu",&Estrelas[i]);
	}
	i = 0;
	while(i >= 0&& i < Cont){
		if( i >= j){
			j = i;
		}
		if(Estrelas[i]%2 == 0){
			if(Estrelas[i] != 0){
				--Estrelas[i];
			}
			--i;

		}
		else{
			if(Estrelas[i] != 0){
				--Estrelas[i];
			}
			++i;
		}
	}
	for (i = 0; i < Cont; ++i){
		Vaquinhas += Estrelas[i];
	}
	++j;
	printf("%llu %llu\n",j,Vaquinhas);
	return 0;
}