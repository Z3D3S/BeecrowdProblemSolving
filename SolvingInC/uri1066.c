#include <stdio.h>
 
int main() {
	int i,Num,Num_p = 0,Num_n = 0,Pares = 0,Impares = 0;
 	for(i = 0;i < 5;++i){
 		scanf("%d",&Num);
 		if(Num % 2 == 0){
 			++Pares;
 		}
 		else{
 			++Impares;
 		}
 		if(Num > 0){
 			++Num_p;
 		}
 		else if(Num < 0){
 			++Num_n;
 		}
 	}
 	printf("%d valor(es) par(es)\n", Pares);
	printf("%d valor(es) impar(es)\n",Impares);
	printf("%d valor(es) positivo(s)\n",Num_p);
	printf("%d valor(es) negativo(s)\n",Num_n);
    return 0;
}