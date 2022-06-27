#include <stdio.h>
#include <math.h>
int main() {
	unsigned int Vetores[4][40],X,Y,i,Aux1,Aux2,Number,j;
	while(scanf("%u %u",&X,&Y) != EOF){
		for(i = 0;i < 4;++i){
			for(j = 0; j < 40;++j){
				Vetores[i][j] = 0;
			}
		}
		i = 0;
		Aux1 = X;
		while(X > 0){
			if(pow(2,i) > X){
				--i;
				X = X-pow(2,i);
				Vetores[0][i] = 1;
				i = 0;
			}
			else if(pow(2,i) == X){
				X = X-pow(2,i);
				Vetores[0][i] = 1;
				i = 0;
			}
			else{
				Vetores[0][i] = 0;
			}
			++i;
		}
		i = 0;
		Aux2 = Y;
		while(Y > 0){
			if(pow(2,i) > Y){
				--i;
				Y = Y-pow(2,i);
				Vetores[1][i] = 1;
				i = 0;
			}
			else if(pow(2,i) == Y){
				Y = Y-pow(2,i);
				Vetores[1][i] = 1;
				i = 0;
			}
			else{
				Vetores[1][i] = 0;
			}
			++i;
		}
		for(i = 0;(pow(2,i) <= Aux1)||(pow(2,i) <= Aux2);++i){
			if(Vetores[0][i] == Vetores[1][i]){
				Vetores[2][i] = 0;
			}
			else if(Vetores[0][i] != Vetores[1][i]){
				Vetores[2][i] = 1;
			}
		}
		Vetores[2][i] = 2;
		Number = 0;
		for(i = 0;Vetores[2][i] != 2;++i){
			if(Vetores[2][i] == 1){
				Number += pow(2,i);
			}
		}
		printf("%u\n",Number);
	}	
	return 0;
}
