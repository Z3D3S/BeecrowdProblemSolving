#include<stdio.h>

int main(){
	int H,M,Var_Boulleana,Numero_De_Testes;
	scanf("%d",&Numero_De_Testes);
	++Numero_De_Testes;
	while(--Numero_De_Testes){
		scanf("%d %d",&H ,&M);
		scanf("%d",&Var_Boulleana);
		if(H <= 9){
			printf("0%d",H);
		}
		else{
			printf("%d",H);
		}
		printf(":");
		if(M <= 9){
			printf("0%d",M);
		}
		else{
			printf("%d",M);
		}
		printf(" - ");
		if(Var_Boulleana == 1){
			printf("A porta abriu!\n");
		}
		else{
			printf("A porta fechou!\n");
		}
	}
	return 0;
}