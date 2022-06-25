#include<stdio.h>

int main(){
	int k,tst,T,Qntd_Pedidos;
	while (scanf ("%d", & tst) && tst){
		for (k = 1; k <= tst; k++){
			scanf("%d",&T);
			if(T >= 3){
				if(T % 2 == 0){
					Qntd_Pedidos = 2*(T-1);
				}
				else if(T % 2 != 0){
					Qntd_Pedidos = 2*T-1;
				}	
				printf("%d\n",Qntd_Pedidos);
			}
		}
	}
	return 0;
}