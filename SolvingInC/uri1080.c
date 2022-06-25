#include <stdio.h>
 
int main() {
	int Xis[200],aux = 0,i,cont;
	for(i = 1;i <= 100;++i){
		scanf("%d",&Xis[i]);
		if(Xis[i] > aux){
			aux = Xis[i];
			cont = i;
		}
	}
	printf("%d\n",aux);
	printf("%d\n",cont);
	
 
    return 0;
}