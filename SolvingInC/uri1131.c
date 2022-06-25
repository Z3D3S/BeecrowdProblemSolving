#include <stdio.h>
 
int main() {
	int A = 0,B= 0,Parada = 0,C = 0, D = 0,Gol_Grem,Gol_inter;
	while(Parada != 2){
		scanf("%d",&Gol_inter);
		scanf("%d",&Gol_Grem);
		if(Gol_Grem > Gol_inter){
			++A;
		}
		else if (Gol_Grem < Gol_inter){
			++B;
		}
		else{
			++C;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&Parada);
		while(Parada != 2&&Parada != 1){
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d",&Parada);
		}
		++D;
 	}
 	printf("%d grenais\n",D);
	printf("Inter:%d\n",B);
	printf("Gremio:%d\n",A);
	printf("Empates:%d\n",C);
	if(B > A){
		printf("Inter ");
	}
	if(A > B){
		printf("Gremio ");
	}
	printf("venceu mais\n");
    return 0;
}