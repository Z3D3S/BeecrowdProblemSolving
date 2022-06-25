#include <stdio.h>
 
int main() {
	int M[500],X,D,i,k,aux;
	while(scanf("%d",&X) != EOF){
		aux = -1;
		for(i = 0;i < X;++i){
			scanf("%d",&D);
			M[i] = D;
			if(aux < M[i]){
				aux = M[i];
			}
		}
		if(aux < 10){
				k = 1;
			}
			else if(aux >=10&&aux < 20){
				k = 2;
			}
			else if(aux >= 20){
				k = 3;
			}

		printf("%d\n",k);
	}

    return 0;
}